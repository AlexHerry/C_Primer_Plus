#include "timing.c"
#include <stdio.h>
int Fib(long long int);
int Fibon1(int n);

int main(void)
{
    long long int n = 10;
    // int num;
    // printf("%p\n", Fib);
    double *arr = timing(Fibon1, n);
    printf("%.3f \n%d\n", arr[0], (int)arr[1]);
    // printf("%d", num);
    free(arr);
    return 0;
}

int Fib(long long int n)
{
    if (n == 1)
    {
        return 1;
    }
    int i = 0, a = 0, b = 1, j;
    while (i < n)
    {
        j = a;
        a += b;
        b = j;
        i++;
    }
    return a;
}

int Fibon1(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return Fibon1(n - 1) + Fibon1(n - 2);
    }
}