#include <stdio.h>
void show(int n, int m, double num[n][m]);
double ave(int n, int m, double num[n][m]);
double max(int n, int m, double num[n][m]);

int main(void)
{
    double num[3][5] = {{1.1, 2.2, 3.3, 4.4, 5.5}, {2.2, 5.5, 6.6, 1.1, 6.6}, {6.6, 2.2, 9.9, 5.5, 8.8}};
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("请输入第%d组五个double类型的数字(回车间隔)\n", i + 1);
    //     for (int j = 0; j < 5; j++)
    //     {
    //         scanf("%lf", &num[i][j]);
    //     }
    // }
    show(3, 5, num);
    return 0;
}

void show(int n, int m, double num[n][m])
{
    double total = 0;
    for (int i = 0; i < n; i++)
    {
        total += ave(i, m, num);
        printf("第%d组数的平均是: %.1f\n", i + 1, ave(i, m, num));
    }
    printf("总共平均值为%.1f\n", total / n);
    double a = max(3, 5, num);
    printf("最大数为:%.1f", a);
}

double ave(int n, int m, double num[n][m])
{
    double a = 0;
    for (int i = 0; i < m; i++)
    {
        a += num[n][i];
    }
    return a / m;
}

double max(int n, int m, double num[n][m])
{
    double a = num[0][0];
    for (int i = 0; i < n * m; i++)
    {
        if (a < *(*num + i))
        {
            a = *(*num + i);
        }
    }
    return a;
}