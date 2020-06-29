#include <stdio.h>

void Init_SSSP(graph G){
    for(int i = 0; i<G.size_N; i++)
        G.V[i].d = 2*G.size_N //because it is a good upper bound for the maximum path length between two nodes
        G.V[i].pred = NULL;
    }
}

void Relax(pqueue Q, node u, node v, int w){

    if(u.d + w <v.d){
        update_distance(pqueue Q, node v, u.d+w);
        v.pred = *u;
    }
}

void Dijkstra(graph G, node s){
    Init_SSSP(G)
    s.d = 0;

    Q = build_queue(G.V);

    while(!Q.isEmpty())
        node u = ext_min(Q);
        for (i = 0; i<G.size_N;i++){
            if (G.AdjMat[G.get_index(u)][i] > 0){
                Relax(Q,u,v,G.AdjMat[G.get_index(u)][i])

            }
        }
}

