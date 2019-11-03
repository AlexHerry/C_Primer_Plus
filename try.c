#include <stdio.h>
int test(char *);

int main(void)
{
    int b[] = {1, 2, 3};
    char a[] = "ab  c ";
    printf("%p\n", &a);
    printf("%d\n", b[0]);
    printf("%p\n", b);
    char *c = a;
    for (; *c; c++)
        printf("%p\n", c);
    printf("%p", c);
    printf("%c", *c);
    test(a);
    return 0;
}

int test(char *a)
{
    // int *node = NULL;
    // printf("%d", *a == NULL);
    return 0;
}