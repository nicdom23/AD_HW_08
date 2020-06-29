#include<stdio.h>
#include<stdlib.h>
#include "graph.h"


graph* build_graph(node* N,int size_N, int** WeightMatrix){

    graph* G =(graph*)malloc(sizeof(graph));

    G->WMat= WeightMatrix;
    G->V = N;
    G->size_N = size_N;

    return G;
}

void delete_graph (graph* G){

    free(G);
}