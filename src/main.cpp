#include "runner.hpp"
#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>

int main(int argc, char**argv) {
  //rankFeatures();
  //evalNormalizeRigid();
  //evalTasks();
  //bruteSubmission();
  //bruteSolve();
  int only_sid = -1;
  cout << "arguments to main" << argv[1]; // VICHANGE
  string directory = argv[1] // VICHANGE add directory argument
  if (argc >= 3) { // VICHANGE: push arguments up by one
    only_sid = atoi(argv[2]); // VICHANGE
    printf("Running only task # %d\n", only_sid);
    cout << argv[2]; // VICHANGE
  }
  int maxdepth = -1;
  if (argc >= 4) { // VICHANGE
    maxdepth = atoi(argv[3]); // VICHANGE
    printf("Using max depth %d\n", maxdepth);
    cout << argv[3]; // VICHANGE
  }
  run(only_sid, maxdepth, directory);
}
