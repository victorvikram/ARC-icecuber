#include "runner.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cassert>

#include <unistd.h>
using namespace std;

int main(int argc, char**argv) {
  printf("in main\n");
  assert(0 == 1); // do I even get here?
  //rankFeatures();
  //evalNormalizeRigid();
  //evalTasks();
  //bruteSubmission();
  //bruteSolve();
  int only_sid = -1;
  printf("arguments to main %s\n", argv[1]); // VICHANGE
  string directory(argv[1]); // VICHANGE add directory argument
  cout << "The directory is " << directory << endl;

  if (argc >= 3) { // VICHANGE: push arguments up by one
    only_sid = atoi(argv[2]); // VICHANGE
    printf("Running only task # %d\n", only_sid);
    printf("second argument %s\n", argv[2]); // VICHANGE
  }
  int maxdepth = -1;
  if (argc >= 4) { // VICHANGE
    maxdepth = atoi(argv[3]); // VICHANGE
    printf("Using max depth %d\n", maxdepth);
    printf("third argument %s\n", argv[3]); // VICHANGE
  }
  run(only_sid, maxdepth, directory);
}
