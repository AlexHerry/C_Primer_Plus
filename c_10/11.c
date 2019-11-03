#include <stdio.h>
void dou(int n, int m, int a[n][m]);
void show(int n, int m, int a[n][m]);

int main(void)
{
    int a[3][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
    dou(3, 5, a);
    show(3, 5, a);
    return 0;
}

void dou(int n, int m, int a[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            *(*(a + i) + j) *= 2;
        }
    }
}

void show(int n, int m, int a[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
}