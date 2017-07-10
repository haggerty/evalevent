//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sun Jul  9 23:30:37 2017 by ROOT version 6.08/06
// from TTree ntp_track/svtxtrack => max truth
// found on file: ../20170606/trk/UPSILON1_2.root_g4svtx_eval.root
//////////////////////////////////////////////////////////

#ifndef trkclas_h
#define trkclas_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class trkclas {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Float_t         event;
   Float_t         trackID;
   Float_t         px;
   Float_t         py;
   Float_t         pz;
   Float_t         pt;
   Float_t         eta;
   Float_t         phi;
   Float_t         charge;
   Float_t         quality;
   Float_t         chisq;
   Float_t         ndf;
   Float_t         nhits;
   Float_t         nmaps;
   Float_t         nintt;
   Float_t         ntpc;
   Float_t         nlmaps;
   Float_t         nlintt;
   Float_t         nltpc;
   Float_t         layers;
   Float_t         dca2d;
   Float_t         dca2dsigma;
   Float_t         pcax;
   Float_t         pcay;
   Float_t         pcaz;
   Float_t         presdphi;
   Float_t         presdeta;
   Float_t         prese3x3;
   Float_t         prese;
   Float_t         cemcdphi;
   Float_t         cemcdeta;
   Float_t         cemce3x3;
   Float_t         cemce;
   Float_t         hcalindphi;
   Float_t         hcalindeta;
   Float_t         hcaline3x3;
   Float_t         hcaline;
   Float_t         hcaloutdphi;
   Float_t         hcaloutdeta;
   Float_t         hcaloute3x3;
   Float_t         hcaloute;
   Float_t         gtrackID;
   Float_t         gflavor;
   Float_t         gnhits;
   Float_t         gnmaps;
   Float_t         gnintt;
   Float_t         gntpc;
   Float_t         gnlmaps;
   Float_t         gnlintt;
   Float_t         gnltpc;
   Float_t         gpx;
   Float_t         gpy;
   Float_t         gpz;
   Float_t         gpt;
   Float_t         geta;
   Float_t         gphi;
   Float_t         gvx;
   Float_t         gvy;
   Float_t         gvz;
   Float_t         gvt;
   Float_t         gfpx;
   Float_t         gfpy;
   Float_t         gfpz;
   Float_t         gfx;
   Float_t         gfy;
   Float_t         gfz;
   Float_t         gembed;
   Float_t         gprimary;
   Float_t         nfromtruth;
   Float_t         nwrong;
   Float_t         ntrumaps;
   Float_t         ntruintt;
   Float_t         ntrutpc;
   Float_t         layersfromtruth;

   // List of branches
   TBranch        *b_event;   //!
   TBranch        *b_trackID;   //!
   TBranch        *b_px;   //!
   TBranch        *b_py;   //!
   TBranch        *b_pz;   //!
   TBranch        *b_pt;   //!
   TBranch        *b_eta;   //!
   TBranch        *b_phi;   //!
   TBranch        *b_charge;   //!
   TBranch        *b_quality;   //!
   TBranch        *b_chisq;   //!
   TBranch        *b_ndf;   //!
   TBranch        *b_nhits;   //!
   TBranch        *b_nmaps;   //!
   TBranch        *b_nintt;   //!
   TBranch        *b_ntpc;   //!
   TBranch        *b_nlmaps;   //!
   TBranch        *b_nlintt;   //!
   TBranch        *b_nltpc;   //!
   TBranch        *b_layers;   //!
   TBranch        *b_dca2d;   //!
   TBranch        *b_dca2dsigma;   //!
   TBranch        *b_pcax;   //!
   TBranch        *b_pcay;   //!
   TBranch        *b_pcaz;   //!
   TBranch        *b_presdphi;   //!
   TBranch        *b_presdeta;   //!
   TBranch        *b_prese3x3;   //!
   TBranch        *b_prese;   //!
   TBranch        *b_cemcdphi;   //!
   TBranch        *b_cemcdeta;   //!
   TBranch        *b_cemce3x3;   //!
   TBranch        *b_cemce;   //!
   TBranch        *b_hcalindphi;   //!
   TBranch        *b_hcalindeta;   //!
   TBranch        *b_hcaline3x3;   //!
   TBranch        *b_hcaline;   //!
   TBranch        *b_hcaloutdphi;   //!
   TBranch        *b_hcaloutdeta;   //!
   TBranch        *b_hcaloute3x3;   //!
   TBranch        *b_hcaloute;   //!
   TBranch        *b_gtrackID;   //!
   TBranch        *b_gflavor;   //!
   TBranch        *b_gnhits;   //!
   TBranch        *b_gnmaps;   //!
   TBranch        *b_gnintt;   //!
   TBranch        *b_gntpc;   //!
   TBranch        *b_gnlmaps;   //!
   TBranch        *b_gnlintt;   //!
   TBranch        *b_gnltpc;   //!
   TBranch        *b_gpx;   //!
   TBranch        *b_gpy;   //!
   TBranch        *b_gpz;   //!
   TBranch        *b_gpt;   //!
   TBranch        *b_geta;   //!
   TBranch        *b_gphi;   //!
   TBranch        *b_gvx;   //!
   TBranch        *b_gvy;   //!
   TBranch        *b_gvz;   //!
   TBranch        *b_gvt;   //!
   TBranch        *b_gfpx;   //!
   TBranch        *b_gfpy;   //!
   TBranch        *b_gfpz;   //!
   TBranch        *b_gfx;   //!
   TBranch        *b_gfy;   //!
   TBranch        *b_gfz;   //!
   TBranch        *b_gembed;   //!
   TBranch        *b_gprimary;   //!
   TBranch        *b_nfromtruth;   //!
   TBranch        *b_nwrong;   //!
   TBranch        *b_ntrumaps;   //!
   TBranch        *b_ntruintt;   //!
   TBranch        *b_ntrutpc;   //!
   TBranch        *b_layersfromtruth;   //!

   trkclas(TTree *tree=0);
   virtual ~trkclas();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef trkclas_cxx
trkclas::trkclas(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("../20170606/trk/UPSILON1_2.root_g4svtx_eval.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("../20170606/trk/UPSILON1_2.root_g4svtx_eval.root");
      }
      f->GetObject("ntp_track",tree);

   }
   Init(tree);
}

trkclas::~trkclas()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t trkclas::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t trkclas::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void trkclas::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("trackID", &trackID, &b_trackID);
   fChain->SetBranchAddress("px", &px, &b_px);
   fChain->SetBranchAddress("py", &py, &b_py);
   fChain->SetBranchAddress("pz", &pz, &b_pz);
   fChain->SetBranchAddress("pt", &pt, &b_pt);
   fChain->SetBranchAddress("eta", &eta, &b_eta);
   fChain->SetBranchAddress("phi", &phi, &b_phi);
   fChain->SetBranchAddress("charge", &charge, &b_charge);
   fChain->SetBranchAddress("quality", &quality, &b_quality);
   fChain->SetBranchAddress("chisq", &chisq, &b_chisq);
   fChain->SetBranchAddress("ndf", &ndf, &b_ndf);
   fChain->SetBranchAddress("nhits", &nhits, &b_nhits);
   fChain->SetBranchAddress("nmaps", &nmaps, &b_nmaps);
   fChain->SetBranchAddress("nintt", &nintt, &b_nintt);
   fChain->SetBranchAddress("ntpc", &ntpc, &b_ntpc);
   fChain->SetBranchAddress("nlmaps", &nlmaps, &b_nlmaps);
   fChain->SetBranchAddress("nlintt", &nlintt, &b_nlintt);
   fChain->SetBranchAddress("nltpc", &nltpc, &b_nltpc);
   fChain->SetBranchAddress("layers", &layers, &b_layers);
   fChain->SetBranchAddress("dca2d", &dca2d, &b_dca2d);
   fChain->SetBranchAddress("dca2dsigma", &dca2dsigma, &b_dca2dsigma);
   fChain->SetBranchAddress("pcax", &pcax, &b_pcax);
   fChain->SetBranchAddress("pcay", &pcay, &b_pcay);
   fChain->SetBranchAddress("pcaz", &pcaz, &b_pcaz);
   fChain->SetBranchAddress("presdphi", &presdphi, &b_presdphi);
   fChain->SetBranchAddress("presdeta", &presdeta, &b_presdeta);
   fChain->SetBranchAddress("prese3x3", &prese3x3, &b_prese3x3);
   fChain->SetBranchAddress("prese", &prese, &b_prese);
   fChain->SetBranchAddress("cemcdphi", &cemcdphi, &b_cemcdphi);
   fChain->SetBranchAddress("cemcdeta", &cemcdeta, &b_cemcdeta);
   fChain->SetBranchAddress("cemce3x3", &cemce3x3, &b_cemce3x3);
   fChain->SetBranchAddress("cemce", &cemce, &b_cemce);
   fChain->SetBranchAddress("hcalindphi", &hcalindphi, &b_hcalindphi);
   fChain->SetBranchAddress("hcalindeta", &hcalindeta, &b_hcalindeta);
   fChain->SetBranchAddress("hcaline3x3", &hcaline3x3, &b_hcaline3x3);
   fChain->SetBranchAddress("hcaline", &hcaline, &b_hcaline);
   fChain->SetBranchAddress("hcaloutdphi", &hcaloutdphi, &b_hcaloutdphi);
   fChain->SetBranchAddress("hcaloutdeta", &hcaloutdeta, &b_hcaloutdeta);
   fChain->SetBranchAddress("hcaloute3x3", &hcaloute3x3, &b_hcaloute3x3);
   fChain->SetBranchAddress("hcaloute", &hcaloute, &b_hcaloute);
   fChain->SetBranchAddress("gtrackID", &gtrackID, &b_gtrackID);
   fChain->SetBranchAddress("gflavor", &gflavor, &b_gflavor);
   fChain->SetBranchAddress("gnhits", &gnhits, &b_gnhits);
   fChain->SetBranchAddress("gnmaps", &gnmaps, &b_gnmaps);
   fChain->SetBranchAddress("gnintt", &gnintt, &b_gnintt);
   fChain->SetBranchAddress("gntpc", &gntpc, &b_gntpc);
   fChain->SetBranchAddress("gnlmaps", &gnlmaps, &b_gnlmaps);
   fChain->SetBranchAddress("gnlintt", &gnlintt, &b_gnlintt);
   fChain->SetBranchAddress("gnltpc", &gnltpc, &b_gnltpc);
   fChain->SetBranchAddress("gpx", &gpx, &b_gpx);
   fChain->SetBranchAddress("gpy", &gpy, &b_gpy);
   fChain->SetBranchAddress("gpz", &gpz, &b_gpz);
   fChain->SetBranchAddress("gpt", &gpt, &b_gpt);
   fChain->SetBranchAddress("geta", &geta, &b_geta);
   fChain->SetBranchAddress("gphi", &gphi, &b_gphi);
   fChain->SetBranchAddress("gvx", &gvx, &b_gvx);
   fChain->SetBranchAddress("gvy", &gvy, &b_gvy);
   fChain->SetBranchAddress("gvz", &gvz, &b_gvz);
   fChain->SetBranchAddress("gvt", &gvt, &b_gvt);
   fChain->SetBranchAddress("gfpx", &gfpx, &b_gfpx);
   fChain->SetBranchAddress("gfpy", &gfpy, &b_gfpy);
   fChain->SetBranchAddress("gfpz", &gfpz, &b_gfpz);
   fChain->SetBranchAddress("gfx", &gfx, &b_gfx);
   fChain->SetBranchAddress("gfy", &gfy, &b_gfy);
   fChain->SetBranchAddress("gfz", &gfz, &b_gfz);
   fChain->SetBranchAddress("gembed", &gembed, &b_gembed);
   fChain->SetBranchAddress("gprimary", &gprimary, &b_gprimary);
   fChain->SetBranchAddress("nfromtruth", &nfromtruth, &b_nfromtruth);
   fChain->SetBranchAddress("nwrong", &nwrong, &b_nwrong);
   fChain->SetBranchAddress("ntrumaps", &ntrumaps, &b_ntrumaps);
   fChain->SetBranchAddress("ntruintt", &ntruintt, &b_ntruintt);
   fChain->SetBranchAddress("ntrutpc", &ntrutpc, &b_ntrutpc);
   fChain->SetBranchAddress("layersfromtruth", &layersfromtruth, &b_layersfromtruth);
   Notify();
}

Bool_t trkclas::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void trkclas::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t trkclas::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef trkclas_cxx
