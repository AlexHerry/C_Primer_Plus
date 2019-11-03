#include <stdio.h>
void rese(double *, int n);

int main(void)
{
    double a[] = {1.1, 2.2, 3.3, 4.4};
    rese(a, sizeof(a) / sizeof(a[0]));
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        printf("%.1f\n", a[i]);
    }
    return 0;
}

void rese(double *a, int n)
{
    double c;
    for (int i = 0; i < (n / 2); i++)
    {
        c = *(a + (n - i - 1));
        *(a + (n - i - 1)) = *(a + i);
        *(a + i) = c;
    }
}