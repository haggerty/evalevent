# evalevent

This is a way to analyze sPHENIX GEANT4 evaluator ntuples
event-by-event.

The evaluator ntuples have no event structure, just rows for every
track or cluster or tower.  To analyze a full event, these macros rely
on the event number ("event") in the ntuple.

These have to be customized for the ntuple in question; trks.{C,h}
decodes ntp_track and clus.{C,h} decodes ntp_cluster.  The ntuple
variables can be dumped with ntp_track->MakeClass("trkclas") or
ntp_cluster->MakeClass("clusclas") which is how trks.h and clus.h were
made.

This will work on single files or a TChain of files.

