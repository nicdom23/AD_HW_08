#include "total_order.h"
#include "node.h"


int leq_dist(const void *a, const void *b)
{
  return (*((node*)a)).d<=(*((node*)b)).d;
}

