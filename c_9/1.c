#include <stdio.h>
double min(double, double);

int main(void)
{
    double n, m, max;
    printf("请输入第一个数:\n");
    scanf("%lf", &n);
    printf("请输入第二个数:\n");
    scanf("%lf", &m);
    max = min(n, m);
    printf("大的数字是:%.3f", max);
    return 0;
}

double min(double x, double y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
