#include <stdio.h>
int max(int[], int);

int main(void)
{
    int a[] = {1, 4, 2, 3};
    int res = max(a, 3);
    printf("%d", res);
    return 0;
}

int max(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}