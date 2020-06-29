#include<stdio.h>
#include "pqueue.h"


pqueue* build_pqueue(void*B,total_order_type leq,int elem_size){

    pqueue* Q = (pqueue*)malloc(sizeof(pqueue));
    Q->A = B;
    Q->leq = leq;
    Q->elem_size = elem_size;
    return Q;
}


//returns 1 id the array is empty, else 0
int is_empty(const pqueue* Q){

    return Q->queue_size == 0;
}


//extract minimum via linear search
void* ext_min(pqueue* Q){

    int min_index = 0;

    for(int i=1; i < Q->queue_size;i++){
        if(Q->leq(Q->A+i*Q->elem_size,Q->A+min_index*Q->elem_size))
            min_index = i;
    }
    swap(Q->A+min_index*Q->elem_size,Q->A+Q->queue_size*Q->elem_size);
    Q->queue_size = Q->queue_size-1;

    return Q->A+Q->queue_size+1;
}