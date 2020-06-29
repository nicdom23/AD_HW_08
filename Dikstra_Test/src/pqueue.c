#include<stdio.h>
#include <stdlib.h>
#include "binheap.h"
#include "pqueue.h"
#include "node.h"

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

void printer(const void * nd){
    printf(" %ld ",((node*)nd)->d);

}

//extract minimum via linear search and returns the index pointing at the element in A
int ext_min(pqueue* Q){
    print_heap(Q->H,printer);
    const void* node_addr = extract_min(Q->H);
    printf("AFTER");
    print_heap(Q->H,printer);
    return (node_addr-Q->H->A)/Q->H->key_size; //returns the index in A
}

void update_distance(pqueue* Q, int index_v, int new_distance){
            
            addr = Q->H->A + index_v*Q->H->key_size
            G->V[index_v].d = new_distance;
            //printf("\n Af  %d %ld \n",index_v,G->V[index_v].d);
            /*for (int index_d = 0; index_d<G->size_N;index_d++){
                if(G->WMat[index_v][index_d]>0 && G->V[index_d].d>new_distance)
                            G->V[index_d].d = new_distance;
            }*/
            
        
}


void free_pqueue(pqueue* Q){
    delete_heap(Q->H);
    free(Q);
}