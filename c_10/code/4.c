#include <stdio.h>

int main(void)
{
    const int **p1;
    int *p2;
    int n = 13;

    p1 = &p2;
    *p1 = &n;
    n = 10;
    printf("%d %d %d", **p1, *p2, n);

    return 0;
}