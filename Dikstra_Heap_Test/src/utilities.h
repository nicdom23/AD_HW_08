#ifndef __UTILITIES__

#include <stdlib.h>

#include "total_order.h"

int **allocate_matrix(const size_t rows, const size_t cols);

void deallocate_matrix(int **A, const size_t rows);

int **allocate_random_matrix(const size_t rows, const size_t cols,int seed);

#endif // __UTILITIES__