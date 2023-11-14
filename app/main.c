#include <stdio.h>

#include "myfunc.h"

int main()
{
    double *arr = find_roots(3,1,2);
    printf("Hello World!\n");
    printf("x1 = %lf, x2 = %lf, number = %lf", arr[0], arr[2], arr[3]);
    return myfunc(2);
}
