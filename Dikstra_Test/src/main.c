#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "dijkstra.h"
#include "utilities.h"

#define MAX_NUM_OF_NODES (2500)

#define NUM_OF_REPETITIONS (15)

//this code test the graph we saw during the course, the directed ring
int main(int argc, char *argv[])
{
  

    int num_of_nodes = 6;
  
    
    node* V  = (node*)malloc(num_of_nodes*sizeof(node)); 
    
    //We impose that negative values in the weight adjacency matrix define infinite weight.
    int seed = 23;
    int **WMat=allocate_matrix(num_of_nodes,num_of_nodes);

    WMat[0][1]=1;
    WMat[0][2]=5;
    WMat[2][3]=2;
    WMat[3][4]=1;
    WMat[4][5]= 3;
    WMat[1][5]= 15;

    graph* G = build_graph(V,num_of_nodes,WMat);

    printf("\nBEFORE EXECUTION\n");
    for (int i = 0; i<num_of_nodes;i++)
      printf(" %ld ",V[i].d);
  
    dijkstra(G,1);  
  
    printf("\nAFTER EXECUTION\n");
    for (int i = 0; i<num_of_nodes;i++)
      printf(" %ld ",V[i].d);
    
  
    delete_graph(G);
    deallocate_matrix(WMat,num_of_nodes);
    free(V);
    
    
    return 0;


}