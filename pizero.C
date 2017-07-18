#include "TFile.h"
#include "TString.h"
#include "TNtuple.h"
#include "TH1.h"
#include "TH2.h"
#include "TChain.h"
#include "TCanvas.h"
#include "TLorentzVector.h"
#include "TStyle.h"

#include <iostream>
#include <vector>

struct cluster
{
  float e;
  float ntowers;
  float eta;
  float phi;
};

bool esort(cluster a, cluster b) { return a.e > b.e; }

// Example of decoding a TChain of evaluator ntuples into events
// John Haggerty, BNL, 2017.07.07

Long64_t pizero(TString filename = "*.root", TString pdffile = "pizero.pdf",TString ntp_name = "ntp_cluster")
{

  TH1F *h_ntowers = new TH1F("h_ntowers","Cluster ntowers",100,0,0);
  TH1F *h_eta = new TH1F("h_eta","Cluster #eta",96,-1.1,1.1);
  TH1F *h_phi = new TH1F("h_phi","Cluster #phi",256,-3.15,3.15);
  TH1F *h_e = new TH1F("h_e","Cluster energy",100,0,0);
  TH2F *h_e1e2 = new TH2F("h_e1e2","Energies of two highest clusters",100,0,0,100,0,0);
  TH1F *h_pair = new TH1F("h_pair","Pair mass",200,0,0);
  TH1F *h_open = new TH1F("h_open","Opening angle",100,0,0.5);
  TH2F *h_e1open = new TH2F("h_e1open","Energy-opening angle;Energy [GeV];Opening angle",100,0,0,100,0,0);

  TChain *fChain = new TChain(ntp_name,"clus");
  if (fChain->Add(filename) <= 0) return 0;

  // nothing's perfect... you have to add the branch names that correspond to the ntuple ntp_name by hand
#include "clus.h"  

  TString select_row;
  TString select_tree;
  Long64_t nclusters = 0;
  Long64_t ientry = 0;
  Long64_t ievent = 0;
  Long64_t total_events = 0;
  Long64_t total_rows = 0;
  Int_t ntrees = fChain->GetNtrees();
  std::cout << "ntrees: " << ntrees << std::endl;
  for (Int_t itree = 0; itree < ntrees; itree++ ) {
    select_tree = "This->GetTreeNumber()==";
    select_tree += itree;
    Long64_t nentries = fChain->GetEntries(select_tree.Data());
    std::cout << "***itree: " << itree << " nentries: " << nentries << std::endl;

    for (ievent = 0 ;; ievent++ ) {
      // GetEntries selected by "event==the number of the event" until there are no more rows
      // that returns the number of rows, which is the number of clusters
      // The loop is over all event numbers, so it will work even if there are missing event numbers,
      // but it relies on an event number in a branch of the ntuple
      select_row = "event==";
      select_row += ievent;
      select_row += " && This->GetTreeNumber()==";
      select_row += itree;
      nclusters = fChain->GetEntries(select_row.Data());

      if ( ievent%100 == 0 ) {
	std::cout << ">>> ievent: " << ievent 
		  << " total_events: " << total_events
		  << " total_rows: " << total_rows 
		  << " "+select_row+" " 
		  << " nclusters: " << nclusters << std::endl;
      }

      std::vector<cluster> emc;
      cluster c;

      // For each cluster (row) in this event, make the branches accessible 
      for (Long64_t icluster = 0; icluster < nclusters; icluster++ ) {
	fChain->GetEntry(ientry);
	if ( e > 0.0 ) {
	  //	  std::cout << "    ientry: " << ientry << " ntowers: " << ntowers << " e: " << e << std::endl;
	  h_ntowers->Fill(ntowers);
	  h_eta->Fill(eta);
	  h_phi->Fill(phi);
	  h_e->Fill(e);
	  c.e = e;
	  c.ntowers = ntowers;
	  c.eta = eta;
	  c.phi = phi;
	  emc.push_back(c);
	}
	ientry++;
	total_rows++;
      }

      // vector of emcal clusters is complete, sort it by cluster energy
      std::sort( emc.begin(), emc.end(), esort );
      /*
      for ( unsigned int i = 0; i < emc.size(); i++ ) { 
	std::cout << "vector<shower>: "
		  << emc[i].e << " " 
		  << emc[i].ntowers << " " 
		  << emc[i].eta << " "
		  << emc[i].phi << std::endl;
      }         
      */
      // get the invariant mass of the two highest energy clusters
      if ( emc.size() > 1 ) {
	TVector3 g3[2];
	TLorentzVector g[2];
	TLorentzVector pair;
	for ( int i = 0; i < 2; i++ ) {
	  g3[i].SetPtEtaPhi(1.0,emc[i].eta,emc[i].phi);
	  g3[i].SetMag(emc[i].e);
	  g[i].SetPtEtaPhiM(g3[i].Perp(),emc[i].eta,emc[i].phi,0.0);
	}
	pair = g[0] + g[1];
	h_pair->Fill(pair.M());
	h_open->Fill(g3[0].Angle(g3[1]));
	h_e1e2->Fill(emc[0].e,emc[1].e);
	h_e1open->Fill(emc[0].e,g3[0].Angle(g3[1]));
      }      
      
      total_events++;
      // finished with this TTree
      if (ientry >= nentries) break;
    }
    // continue to next tree in TChain
    ientry = 0;
  }

  // all events in TChain processed... finish up

  gStyle->SetOptFit(111);
  if ( total_rows > 0 ) {
    TCanvas *c1 = new TCanvas();
    h_ntowers->Draw();
    c1->Print(pdffile+"(","pdf portrait");
    h_eta->Draw();
    c1->Print(pdffile,"pdf portrait");
    h_phi->Draw();
    c1->Print(pdffile,"pdf portrait");
    h_e->Draw();
    c1->Print(pdffile,"pdf portrait");
    h_e1e2->Draw("box");
    c1->Print(pdffile,"pdf portrait");
    h_open->Draw();
    c1->Print(pdffile,"pdf portrait");
    h_e1open->Draw();
    c1->Print(pdffile,"pdf portrait");
    h_pair->Fit("gaus","","",0.0,0.25);
    c1->Print(pdffile+")","pdf portrait");
  }

  return total_events;
}
