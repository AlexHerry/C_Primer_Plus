#include <stdio.h>

int main(void)
{
    int abc, a, b, c, i, j, k;
    printf("请输入3位数：\n");
    scanf("%d", &abc);
    a = abc / 100;
    for (i = 1; i <= a; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 10; k++)
            {
                if (((i * i * i + j * j * j + k * k * k) == i * 100 + j * 10 + k) && ((i * 100 + j * 10 + k) < abc))
                {
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }
    return 0;
}