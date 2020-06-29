#ifndef GRAPH
#define GRAPH
#include"node.h"

//datatypes for the graphs
typedef struct{

node* V;
int** AdjMatrix;

size_t size_N; //number of nodes


}graph;

//build the graph
graph* BuildGraph(node* N,int size_N, int** AdjMatrix)

#endif //GRAPH
