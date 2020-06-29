#ifndef GRAPH
#define GRAPH
#include"node.h"

//datatypes for the graphs
typedef struct{
node* V;
int** WMat;
size_t size_N; //number of nodes

}graph;

//build the graph
graph* build_graph(node* N,int size_N, int** AdjMatrix);
void delete_graph (graph* G);

#endif //GRAPH
