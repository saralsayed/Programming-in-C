#include <stdio.h>
#include <math.h>
#include "vector_functions.h"
#define N 3

double a[N], b[N], sum[N], cross[N];


int main(void) {

    double d,v;

    scan(a,"a");
    printv(a,"a");

    scan(b,"b");
    printv(b,"b");

    vecsum(sum, b, sum);
    printv(sum,"sum");

    veccross(a, b, cross);
    printv(cross,"cross");

    d = vecinner(a, b);
    printd(d,"inner product");

    v = vecnorm(a, b);
    printd(v,"vecnorm");
    printf("\n");
    
    return 0;
}
