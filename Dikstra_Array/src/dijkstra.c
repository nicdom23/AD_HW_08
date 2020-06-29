#include <stdio.h>
#include "node.h"
#include "graph.h"
#include "pqueue.h"

void Init_SSSP(graph* G){
    for(int i = 0; i<G->size_N; i++){
        G->V[i].d = 2*G->size_N; //because it is a good upper bound for the maximum path length between two nodes
        G->V[i].pred = NULL;
    }
}

void Relax(pqueue* Q,graph*G, int index_u, int index_v, int weight){

    if(G->V[index_u].d + weight < G->V[index_v].d ){
        update_distance(pqueue* Q, int index_v, Q->V[index_u].d + weight);
        G->V[index_u].pred = index_u;
    }
}

void Dijkstra(graph* G, int index_s){
    Init_SSSP(G)
    G->V[index_s].d = 0;

    pqueue * Q = build_queue(G->V);

    while(!isEmpty(Q))
        int index_u = ext_min(Q);
        for (i = 0; i<G->size_N;i++){
            if (G->WMat[index_u][i] > 0){
                Relax(Q,index_u,index_v,G->WMat[G.get_index(u)][i])

            }
        }
}

