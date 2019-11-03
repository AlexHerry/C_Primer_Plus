#include "study.c"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double *timing(int (*func)(), int n);

clock_t start, stop;
double duration;

double *timing(int (*func)(), int n)
{
    start = clock();
    double num = func(n);
    stop = clock();
    duration = ((double)(stop - start)) / CLK_TCK;
    // printf("This exeprogram timing %.3fs", duration);
    double *arr = (double *)malloc(2);
    arr[0] = duration;
    arr[1] = num;
    return arr;
}