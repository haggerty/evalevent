# evalevent

This is a way to analyze sPHENIX GEANT4 evaluator ntuples event-by-event.

The evaluator ntuples have no event structure, just rows for every track or cluster or tower.
To analyze a full event, these macros rely on the event number ("event") in the ntuple.

This will work on single files or a TChain of files.

