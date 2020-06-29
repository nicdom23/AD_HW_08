#include<stdio.h>
#include "graph.h"

graph* BuildGraph(node* N,int size_N, int** AdjMatrix){

    graph* G =(graph*)malloc(sizeof(graph));

    G->AdjMatrix= AdjMatrix;
    G->V = N;
    G->size_N = size_N;

    return G;
}