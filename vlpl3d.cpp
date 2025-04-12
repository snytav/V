#include <stdio.h>
#include <stdlib.h>

#include <iostream>

#include <time.h>

#define X_ACCESS

//#include "vlpl3d.h"


//#include "CUDA_WRAP/plasma_particles.h"

using namespace std;


int main(int argc, char** argv)
{
  char* infile;

  int rank = 0;
  int myid, numprocs;
  int  namelen;

  
#ifdef V_MPI
  char processor_name[MPI_MAX_PROCESSOR_NAME];
#endif

  
  if (argc < 2) {
	cout << "Usage: v3d <ini-file> \n";
	cout << "Default name: v.ini will be used \n";
    //    return -10;
    infile = "v.ini";
  } else {
    infile = argv[1];
    cout << "The start file is: " << argv[1] << " \n";
  }

infile = "v.ini";


//printf("PARA init rank %d l_Mx %d \n",GetRank(),l_Mx);

#ifdef NO_X_ACCESS
//    domain->Run();
#endif
//  delete domain;

  return 0;
}

