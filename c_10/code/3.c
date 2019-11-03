#include <stdio.h>

int main(void)
{
    int zippo[4][2] = {{2, 4},
                       {6, 8},
                       {1, 3},
                       {5, 7}};
    int(*a)[2];
    a = zippo;

    int *p;
    int torf[2][2] = {{12}, {34, 46}};
    p = torf[0];

    printf("%p %p %p\n", p, p + 1, p + 2);

    printf("%p %p\n", *zippo + 1, &zippo[0][1]);

    printf("a = %p, a+1= %p\n", a, a + 1);             // &{2, 4} &{6, 8}
    printf("a[0] = %p, a[0]+1= %p\n", a[0], a[0] + 1); // &{2, 4} &4
    printf("*a = %p, *a+1= %p\n", *a, *a + 1);         // &{2, 4} &4
    printf("a[0][0] = %d\n", a[0][0]);                 // 2
    printf("*a[0] = %d\n", *a[0]);                     // 2
    printf("**a = %d\n", **a);                         // 2
    printf("a[2][1] = %d\n", a[2][1]);                 // 3
    printf("*(*(a+2)+1) = %d\n", *(*(a + 2) + 1));     // 3

    return 0;
}