#include<stdio.h>
#include <stdlib.h>
#include "pqueue.h"


pqueue* build_pqueue(void*B,total_order_type leq,int num_elem,int elem_size){

    pqueue* Q = (pqueue*)malloc(sizeof(pqueue));
    Q->nodes_indexes = (int*)malloc(sizeof(int)*num_elem);
    for(size_t i = 0;i<elem_size;i++){
        Q->nodes_indexes[i] = i;

    }
    Q->A = B;
    Q->leq = leq;
    Q->queue_size = num_elem;
    Q->elem_size = elem_size;
    return Q;
}


//returns 1 id the array is empty, else 0
int is_empty(const pqueue* Q){

    return Q->queue_size == 0;
}


//extract minimum via linear search and returns the index pointing at the element in A
int ext_min(pqueue* Q){

    int min_index = Q->nodes_indexes[0];

    for(int i=1; i < Q->queue_size;i++){
        if(Q->leq(Q->A+Q->nodes_indexes[i]*Q->elem_size,Q->A+min_index*Q->elem_size))
            min_index = i;
    }

    int temp = Q->nodes_indexes[Q->queue_size];
    Q->nodes_indexes[Q->queue_size] = Q->nodes_indexes[min_index];
    Q->nodes_indexes[min_index] = temp;
    
    Q->queue_size = Q->queue_size-1;

    return Q->nodes_indexes[Q->queue_size+1];
}

void free_pqueue(pqueue* Q){
    free(Q->nodes_indexes);
    free(Q);
}