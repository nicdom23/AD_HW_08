#include <stdio.h>
#include <stdlib.h>
#include "dijkstra.h"
#include "utilities.h"

#define NUM_OF_NODES (20)

#define NUM_OF_REPETITIONS (15)


int main(int argc, char *argv[])
{
    node* V  = (node*)malloc(NUM_OF_NODES*sizeof(node)); 

    //We impose that negative values in the weight adjacency matrix define infinite weight.
    int **WMat=allocate_random_matrix(NUM_OF_NODES,NUM_OF_NODES);

    graph* G = BuildGraph(V,NUM_OF_NODES,WMat);


    struct timespec requestStart, requestEnd;
  double accum, cpy_accum;
  
  // Collecting time for copy A into B and sorting B
  clock_gettime(CLOCK_REALTIME, &requestStart);
    Dijkstra(G,1);  
  clock_gettime(CLOCK_REALTIME, &requestEnd);

  accum = (requestEnd.tv_sec - requestStart.tv_sec) +
          (requestEnd.tv_nsec - requestStart.tv_nsec) / 1E9;


    printf("\n TIME OF EXECUTION: %f\n",accum);



    deallocate_matrix(WMat,NUM_OF_NODES);
    free(V);

    return 0;
}