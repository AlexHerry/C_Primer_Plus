#include <stdio.h>
#define SIZE 4
void cal(int n, int arr_1[n], int arr_2[n], int arr_3[n]);

int main(void)
{
    int arr_1[SIZE] = {1, 2, 3, 4};
    int arr_2[SIZE] = {1, 2, 3, 4};
    int arr_3[SIZE];
    cal(SIZE, arr_1, arr_2, arr_3);
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\n", arr_3[i]);
    }
    return 0;
}

void cal(int n, int arr_1[], int arr_2[], int arr_3[])
{
    for (int i = 0; i < n; i++)
    {
        arr_3[i] = arr_1[i] + arr_2[i];
    }
}