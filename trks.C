#include "TFile.h"
#include "TString.h"
#include "TNtuple.h"
#include "TH1.h"
#include "TChain.h"
#include "TCanvas.h"

#include <iostream>

// Example of decoding a TChanin of evaluator ntuples into events
// John Haggerty, BNL, 2017.07.07

Long64_t trks(TString filename = "*.root", TString ntp_name = "ntp_track")
{

  TH1F *h_quality = new TH1F("h_quality","Track quality",100,0,0);
  TH1F *h_eta = new TH1F("h_eta","Track #eta",100,0,0);
  TH1F *h_phi = new TH1F("h_phi","Track #phi",100,0,0);
  TH1F *h_chisq = new TH1F("h_chisq","Track #chi^{2}",100,0,0);

  TChain *fChain = new TChain(ntp_name,"trks");
  if (fChain->Add(filename) <= 0) return 0;

  // nothing's perfect... you have to add the branch names that correspond to the ntuple ntp_name by hand
#include "trks.h"  

  TString select_row;
  TString select_tree;
  Long64_t ntracks = 0;
  Long64_t ientry = 0;
  Long64_t ievent = 0;
  Long64_t total_events = 0;
  Int_t ntrees = fChain->GetNtrees();
  std::cout << "ntrees: " << ntrees << std::endl;
  for (Int_t itree = 0; itree < ntrees; itree++ ) {
    select_tree = "This->GetTreeNumber()==";
    select_tree += itree;
    Long64_t nentries = fChain->GetEntries(select_tree.Data());
    std::cout << "***itree: " << itree << " nentries: " << nentries << std::endl;

    for (ievent = 0 ;; ievent++ ) {
      // GetEntries selected by "event==the number of the event" until there are no more rows
      // that returns the number of rows, which is the number of tracks
      // The loop is over all event numbers, so it will work even if there are missing event numbers,
      // but it relies on an event number in a branch of the ntuple
      select_row = "event==";
      select_row += ievent;
      select_row += " && This->GetTreeNumber()==";
      select_row += itree;
      ntracks = fChain->GetEntries(select_row.Data());
      std::cout << ">>> ievent: " << ievent << " "+select_row+" " << " ntracks: " << ntracks << std::endl;
      // For each track (row) in this event, make the branches accessible 
      for (Long64_t itrack = 0; itrack < ntracks; itrack++ ) {
	fChain->GetEntry(ientry);
	std::cout << "    ientry: " << ientry << " quality: " << quality << " cemce3x3: " << cemce3x3 << std::endl;
	h_quality->Fill(quality);
	h_eta->Fill(eta);
	h_phi->Fill(phi);
	h_chisq->Fill(chisq);
	ientry++;
	total_events++;
      }
      // finished with this TTree
      if (ientry >= nentries) break;
    }
    // continue to next tree in TChain
    ientry = 0;
  }

  // all events in TChain processed... finish up

  if ( total_events > 0 ) {
    TCanvas *c1 = new TCanvas();
    h_quality->Draw();
    c1->Print("trks.pdf(","pdf portrait");
    h_eta->Draw();
    c1->Print("trks.pdf","pdf portrait");
    h_phi->Draw();
    c1->Print("trks.pdf","pdf portrait");
    h_chisq->Draw();
    c1->Print("trks.pdf)","pdf portrait");
  }

  return total_events;
}
