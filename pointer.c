#include <stdio.h>

int add(int, int);
int main(void)
{
    int a = 123;
    int *t = &a;
    int p1, p2, num;
    printf("-------------\n");
    if ((scanf("%d", &p1)) == 1 && (scanf("%d", &p2)) == 1)
    {
        num = add(p1, p2);
        printf("-------------\n");
        printf("%d", num);
    }
    
    
}

int add(int a, int b)
{
    int tmp = a + b;

    return tmp;
}