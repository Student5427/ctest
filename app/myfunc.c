
#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"

int myfunc(int b) {
    char *buffer = malloc(sizeof(char) * 1000);
    buffer [0] = b + 4;
    // здесь должен ругаться sonarcloud, т.к. утечка памяти
    return buffer[0];
}

int val;

int fibonachi(int num) {
    int prev = 1;
    int next = 1;

    if (num == 0)
        return 1;

    if (num < 0)
        return 0;

    if (num <= 2)
        return num;

    int i = 2;
    while (i < num) {
        next += prev;
        prev = next - prev;
        i++;
    }

    return next;
}

void printStdoutMessages() {
    printf("This is a test message from myfunc.c\n");
    printf("Do not disturb\n");
}


double* find_roots(double a,double b,double c)
{
    int d = b * b - 4 * a * c; 
    
    double x1,x2 = 0;
    double number = 0;

    double *temp = (double*) malloc(sizeof(double) * 3);
    
    double sqrt_val = sqrt(abs(d));
    
    if (d > 0) { 
        printf("Roots are real and different\n"); 
        x1 = (double)((-b + sqrt_val) / (2 * a)); 
        x2 = (double)((-b - sqrt_val) / (2 * a)); 
        number = 2;
    }
    else if (d == 0) { 
        printf("Roots are real and same\n"); 
        x1 = (double)b / (2 * a) * (-1); 
        number = 1;
    } 
    
    *temp = x1;
    *(temp + 1) = x2;
    *(temp + 2) = number;
 
    return temp;
}

