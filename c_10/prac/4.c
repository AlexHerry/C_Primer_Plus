#include <stdio.h>
int max(double[], int);

int main(void)
{
    double a[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int res = max(a, 5);
    printf("%d\n", res);

    return 0;
}

int max(double a[], int n)
{
    double max = a[0];
    int index = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            index = i;
        }
    }
    return index;
}