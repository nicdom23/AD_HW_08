#ifndef __TOTAL_ORDER__
#define __TOTAL_ORDER__

typedef int (*total_order_type)(const void *a, const void *b);

int leq_dist(const void *a, const void *b);

#endif // __TOTAL_ORDER__