//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Jul 10 12:16:57 2017 by ROOT version 6.08/06
// from TTree ntp_cluster/cluster => max truth primary
// found on file: UPSILON1_2.root_g4cemc_eval.root
//////////////////////////////////////////////////////////

#ifndef clusclas_h
#define clusclas_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class clusclas {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Float_t         event;
   Float_t         clusterID;
   Float_t         ntowers;
   Float_t         eta;
   Float_t         phi;
   Float_t         e;
   Float_t         gparticleID;
   Float_t         gflavor;
   Float_t         gnhits;
   Float_t         geta;
   Float_t         gphi;
   Float_t         ge;
   Float_t         gpt;
   Float_t         gvx;
   Float_t         gvy;
   Float_t         gvz;
   Float_t         gembed;
   Float_t         gedep;
   Float_t         efromtruth;

   // List of branches
   TBranch        *b_event;   //!
   TBranch        *b_clusterID;   //!
   TBranch        *b_ntowers;   //!
   TBranch        *b_eta;   //!
   TBranch        *b_phi;   //!
   TBranch        *b_e;   //!
   TBranch        *b_gparticleID;   //!
   TBranch        *b_gflavor;   //!
   TBranch        *b_gnhits;   //!
   TBranch        *b_geta;   //!
   TBranch        *b_gphi;   //!
   TBranch        *b_ge;   //!
   TBranch        *b_gpt;   //!
   TBranch        *b_gvx;   //!
   TBranch        *b_gvy;   //!
   TBranch        *b_gvz;   //!
   TBranch        *b_gembed;   //!
   TBranch        *b_gedep;   //!
   TBranch        *b_efromtruth;   //!

   clusclas(TTree *tree=0);
   virtual ~clusclas();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef clusclas_cxx
clusclas::clusclas(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("UPSILON1_2.root_g4cemc_eval.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("UPSILON1_2.root_g4cemc_eval.root");
      }
      f->GetObject("ntp_cluster",tree);

   }
   Init(tree);
}

clusclas::~clusclas()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t clusclas::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t clusclas::LoadTree(Long64_t entry)
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

void clusclas::Init(TTree *tree)
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
   fChain->SetBranchAddress("clusterID", &clusterID, &b_clusterID);
   fChain->SetBranchAddress("ntowers", &ntowers, &b_ntowers);
   fChain->SetBranchAddress("eta", &eta, &b_eta);
   fChain->SetBranchAddress("phi", &phi, &b_phi);
   fChain->SetBranchAddress("e", &e, &b_e);
   fChain->SetBranchAddress("gparticleID", &gparticleID, &b_gparticleID);
   fChain->SetBranchAddress("gflavor", &gflavor, &b_gflavor);
   fChain->SetBranchAddress("gnhits", &gnhits, &b_gnhits);
   fChain->SetBranchAddress("geta", &geta, &b_geta);
   fChain->SetBranchAddress("gphi", &gphi, &b_gphi);
   fChain->SetBranchAddress("ge", &ge, &b_ge);
   fChain->SetBranchAddress("gpt", &gpt, &b_gpt);
   fChain->SetBranchAddress("gvx", &gvx, &b_gvx);
   fChain->SetBranchAddress("gvy", &gvy, &b_gvy);
   fChain->SetBranchAddress("gvz", &gvz, &b_gvz);
   fChain->SetBranchAddress("gembed", &gembed, &b_gembed);
   fChain->SetBranchAddress("gedep", &gedep, &b_gedep);
   fChain->SetBranchAddress("efromtruth", &efromtruth, &b_efromtruth);
   Notify();
}

Bool_t clusclas::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void clusclas::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t clusclas::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef clusclas_cxx
