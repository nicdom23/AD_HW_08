#include <stdio.h>
#include "node.h"
#include "graph.h"
#include "pqueue.h"
#include <stdint.h>


void init_SSSP(graph* G){
    for(int i = 0; i<G->size_N; i++){
        G->V[i].d = SIZE_MAX/2; 
        G->V[i].pred = -1;  // -1 means no predecessor
    }
}

void relax(pqueue* Q,graph*G, int index_u, int index_v, int weight){
    
    if(G->V[index_u].d + weight < G->V[index_v].d ){
        node * new = (node*)malloc(sizeof(node));
        new->d=(G->V[index_u].d + weight);
        const void * new2= new; 
        update_distance(Q,index_v, new2);
        G->V[index_u].pred = index_u;
        free(new);
    }
}

void dijkstra(graph* G, int index_s){
    init_SSSP(G);
    G->V[index_s].d = 0;
    
    pqueue * Q = build_pqueue(G->V,leq_dist,G->size_N,sizeof(node));
    
    while(!is_empty(Q)){
        
        int index_u = ext_min(Q);

       
        for (int index_v = 0; index_v<G->size_N;index_v++){
            if (G->WMat[index_u][index_v] >= 0){
            
                relax(Q,G,index_u,index_v,G->WMat[index_u][index_v]);

            }
        }
    }
    free_pqueue(Q);
}
