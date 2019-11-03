#include <stdio.h>
void arr(int n, int m, double ne[n][m], double sou[n][m]);
void show(int n, int m, double ne[n][m]);

int main(void)
{
    double a[3][5] = {{1.1, 2.2, 3.3, 4.4, 5.5}, {6.6, 7.7, 8.8, 9.9, 10.0}, {11.1, 12.2, 13.3, 14.4, 15.5}};
    double new_arr[3][5];
    arr(3, 5, new_arr, a);
    show(3, 5, a);
    show(3, 5, new_arr);
    return 0;
}

void arr(int n, int m, double ne[n][m], double sou[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ne[i][j] = sou[i][j];
        }
    }
}

void show(int n, int m, double ne[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%.1f\t", ne[i][j]);
        }
        printf("\n");
    }
}