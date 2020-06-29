#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "dijkstra.h"
#include "utilities.h"

#define MAX_NUM_OF_NODES (2500)

#define NUM_OF_REPETITIONS (15)


int main(int argc, char *argv[])
{
  printf("\n n  time \n");

    for(size_t num_of_nodes = 5; num_of_nodes< MAX_NUM_OF_NODES;num_of_nodes = num_of_nodes+100){
  
    
    node* V  = (node*)malloc(num_of_nodes*sizeof(node)); 
    
    //We impose that negative values in the weight adjacency matrix define infinite weight.
    int seed = 23;
    int **WMat=allocate_random_matrix(num_of_nodes,num_of_nodes,seed);
    
    graph* G = build_graph(V,num_of_nodes,WMat);
  
  
    struct timespec requestStart, requestEnd;
  double accum, cpy_accum;
  
  
  clock_gettime(CLOCK_REALTIME, &requestStart);
  for (int i =0; i < NUM_OF_REPETITIONS;i++){
    dijkstra(G,1);  
  }
  clock_gettime(CLOCK_REALTIME, &requestEnd);

  accum = (requestEnd.tv_sec - requestStart.tv_sec) +
          (requestEnd.tv_nsec - requestStart.tv_nsec) / 1E9;

    accum=accum/NUM_OF_REPETITIONS;
      
    
    
    printf("\n%4.ld   %f",num_of_nodes,accum);
    
    
    
    delete_graph(G);
    deallocate_matrix(WMat,num_of_nodes);
    free(V);
    
    }
    return 0;


}
