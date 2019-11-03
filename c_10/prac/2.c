#include <stdio.h>
void copy_arr(double[], double[], int n);
void copy_ptr(double *, double *, int n);

int main(void)
{
    double seven[2][2] = {{1.1, 2.2}, {3.3, 4.4}};
    double new_seven[2][2] = {{}, {}};
    copy_ptr(new_seven[0], seven[0], 2);
    copy_ptr(new_seven[1], seven[1], 2);
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double cp_1[5];
    double cp_2[5];
    // double cp_3[5];
    copy_arr(cp_1, source, 5);
    copy_ptr(cp_2, source, 5);
    // for (int i = 0; i < sizeof(cp_1) / sizeof(cp_1[0]); i++)
    // {
    //     printf("%.1f\n", *(cp_2 + i));
    // }
    // printf("\n");
    for (int i = 0; i < sizeof(new_seven) / sizeof(new_seven[0]); i++)
    {
        for (int j = 0; j < sizeof(new_seven[0]) / sizeof(new_seven[0][0]); j++)
        {
            printf("%.1f\n", new_seven[i][j]);
        }
    }
}

void copy_arr(double tar[], double sou[], int n)
{
    for (int i = 0; i < n; i++)
    {
        tar[i] = sou[i];
    }
}

void copy_ptr(double *tar, double *sou, int n)
{
    for (int i = 0; i < n; i++)
    {
        *tar = *sou++;
        tar++;
    }
    printf("\n");
}