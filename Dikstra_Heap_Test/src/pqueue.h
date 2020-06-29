#ifndef PQUEUE
#define PQUEUE
#include "total_order.h"
#include "binheap.h"
//datatypes for the pqueue

typedef struct{

    binheap_type * H;

}pqueue;

pqueue* build_pqueue(void*B,total_order_type leq,int num_elem,int elem_size);

int is_empty(const pqueue* Q);

//we return the index of A that points at the wanted node
int ext_min(pqueue* Q);

void update_distance(pqueue* Q, int index_v, const void* new_distance);

void free_pqueue(pqueue* Q);

#endif// PQUEUE