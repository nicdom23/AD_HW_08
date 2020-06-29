#include <stdio.h>

#include "utilities.h"

#define MAX_SIZE_ALL (1<<13)
#define MAX_SIZE_NLOGN (1<<20)
#define ARRAY_SIZE (1<<23)

#define NUM_OF_REPETITIONS 15


int main(int argc, char *argv[])
{
    int *A=get_random_int_array(ARRAY_SIZE);
    int *A_sorted=malloc(sizeof(int)*ARRAY_SIZE);
    int *A_rev_sorted=malloc(sizeof(int)*ARRAY_SIZE);

    for (unsigned int i=0; i<ARRAY_SIZE; i++) {
        A_sorted[i]=i;
        A_rev_sorted[i]=ARRAY_SIZE-i;
    } 

    

    free(A);
    free(A_sorted);
    free(A_rev_sorted);

    return 0;
}