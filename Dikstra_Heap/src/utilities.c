#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "node.h"
#include "graph.h"
#include "utilities.h"
#include "pqueue.h"

#include "total_order.h"


int **allocate_matrix(const size_t rows, const size_t cols) {
  int **M = (int **)malloc(sizeof(int *) * rows);

  for (size_t i = 0; i < rows; i++) {
    M[i] = (int *)malloc(sizeof(int) * cols);
  }

  return M;
}

void deallocate_matrix(int **A, const size_t rows) {
  for (size_t i = 0; i < rows; i++) {
    free(A[i]);
    
  }
  
  free(A);

}

int **allocate_random_matrix(const size_t rows, const size_t cols, int seed) {
  
  int **A = allocate_matrix(rows, cols);
  
  srand(seed);
  for (size_t i = 0; i < rows; i++) {
    for (size_t j = 0; j < cols; j++) {
      A[i][j] = ( rand() - RAND_MAX/2) % 120;
    }
  }

  return A;
}
