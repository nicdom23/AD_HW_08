#include <stdio.h>

struct node{

    int d; //node's distance
    node* pred; //node's predecessor

};

struct graph{

node* V;
int*int* AdjMatrix;

size_t size_N; //number of nodes


};

struct pqueue{

void* Q;
int elem_size;
size_t queue_size;


void is_empty(){

    return queue_size == 0;
}
void
}