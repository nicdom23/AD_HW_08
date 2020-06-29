#ifndef GRAPH
#define GRAPH

void Init_SSSP(graph G);
void Relax(pqueue Q, node u, node v, int w);
void Dijkstra(graph G, node s)
#endif // GRAPH