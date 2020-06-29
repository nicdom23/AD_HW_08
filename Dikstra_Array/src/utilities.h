#ifndef __UTILITIES__

#include <stdlib.h>

#include "total_order.h"

int **allocate_matrix(const size_t rows, const size_t cols);

void deallocate_matrix(int **A, const size_t rows);

int **allocate_random_matrix(const size_t rows, const size_t cols)

double test(void (*sort)(void *A, const unsigned int n, 
                         const size_t elem_size, 
                         total_order leq), 
            const void *A, const unsigned int n, 
            const size_t elem_size, total_order leq, 
            const unsigned int rep, int *sorted);

#endif // __UTILITIES__