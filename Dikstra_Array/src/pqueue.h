#ifndef PQUEUE
#define PQUEUE

typedef int (*total_order_type)(const void *a, const void *b);

//datatypes for the pqueue
typedef struct{

    void* A;
    int* nodes_indexes;
    size_t elem_size;
    int elem_size;
    size_t queue_size;
    total_order_type leq;
}pqueue;
pqueue* build_pqueue(void*B,total_order_type leq,int elem_size);
int is_empty(const pqueue* Q);

//we return the index of A that points at the wanted node
int ext_min(pqueue* Q)
#endif// PQUEUE