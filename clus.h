//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Jul 10 12:16:57 2017 by ROOT version 6.08/06
// from TTree ntp_cluster/cluster => max truth primary
// found on file: UPSILON1_2.root_g4cemc_eval.root
//////////////////////////////////////////////////////////

#ifndef clusclas_h
#define clusclas_h

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

#endif

