#include <stdio.h>
double diff(double[], int n);

int main(void)
{
    double a[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double res = diff(a, 5);
    printf("%.1f\n", res);

    return 0;
}

double diff(double a[], int n)
{
    double min = a[0];
    double max_1 = a[1], diff;
    for (int i = 0; i < n; i++)
    {
        if (max_1 < a[i])
        {
            max_1 = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    diff = max_1 - min;
    return diff;
}