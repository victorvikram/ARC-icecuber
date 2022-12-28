#include "runner.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cassert>
#include <cstring>

#include <unistd.h>
using namespace std;

int main(int argc, char**argv) {
  printf("in main\n");
  cerr << "in main" << endl;
  cerr << "argc" << argc << endl;
  cerr << "argv 1" << argv[1] << endl;
  cerr << "argv 2" << argv[2] << endl;
  cerr << "argv 3" << argv[3] << endl;
  //rankFeatures();
  //evalNormalizeRigid();
  //evalTasks();
  //bruteSubmission();
  //bruteSolve();
  int only_sid = -1;
  printf("arguments to main %s\n", argv[1]); // VICHANGE
  // assert(argv[1] == NULL); // do I even get here?
  // assert(strcmp(argv[1],'small_dataset_0') == 0);
  // assert(strcmp(argv[2],'0') == 0);
  // assert(strcmp(argv[3],'3') == 0);
  // assert(strcmp(argv[0],'./run') == 0);

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
