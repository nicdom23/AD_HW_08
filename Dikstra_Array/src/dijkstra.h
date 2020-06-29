#ifndef DIJKSTRA
#define DIJKSTRA
#include "node.h"
#include "graph.h"
#include "pqueue.h"

void Init_SSSP(graph G);
void Relax(pqueue Q, node u, node v, int w);
void Dijkstra(graph G, node s)
#endif // DIJKSTRA