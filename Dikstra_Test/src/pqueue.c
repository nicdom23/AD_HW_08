#include<stdio.h>
#include <stdlib.h>
#include "binheap.h"
#include "pqueue.h"


pqueue* build_pqueue(void*B,total_order_type leq,int num_elem,int elem_size){

    pqueue* Q = (pqueue*)malloc(sizeof(pqueue));
    
    Q->H = build_heap(B, 
                      num_elem,
                      num_elem,  
                      elem_size, 
                      leq);

    return Q;
    
}


//returns 1 id the array is empty, else 0
int is_empty(const pqueue* Q){

    return is_heap_empty(Q->H);
}



//extract minimum via linear search and returns the index pointing at the element in A
int ext_min(pqueue* Q){

    const void* node_addr = extract_min(Q->H);
    
    return (node_addr-Q->H->A)/Q->H->key_size; //returns the index in A
}

void update_distance(pqueue* Q, int index_v, const void* new_distance){
            
            void * addr = Q->H->A + index_v*Q->H->key_size;
            
            decrease_key(Q->H, addr, new_distance);

            
        
}


void free_pqueue(pqueue* Q){
    delete_heap(Q->H);
    free(Q);
}