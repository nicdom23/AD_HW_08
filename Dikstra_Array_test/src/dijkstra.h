#ifndef DIJKSTRA
#define DIJKSTRA
#include "node.h"
#include "graph.h"
#include "pqueue.h"

void init_SSSP(graph* G);

void update_distance(pqueue* Q,graph* G, int index_v, int new_weight);

void relax(pqueue* Q,graph* G, int index_u, int index_v, int weight);

void dijkstra(graph* G, int index_s);


#endif // DIJKSTRA