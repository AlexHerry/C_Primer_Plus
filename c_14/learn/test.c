#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[10];
    char *b = fgets(a, 10, stdin);
    for (int i = 0; i < 10; i++)
    {
        printf("%d \n", *(a + i));
    }
    printf("%s\n", a);
    // printf("%p", b);

    return 0;
}