#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"

int main()
{
    double* roots = (double*)malloc(2 * sizeof(double)); 
    find_roots(roots, 3, 1, 2);
    printf("Hello World!\n");
    printf("x1 = %lf, x2 = %lf,  roots[0], roots[1]);
    return 0;
}
