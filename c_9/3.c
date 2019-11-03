#include <stdarg.h>
#include <stdio.h>
#include <string.h>

int mean(int i, ...);
int *enter(void);

int main(void)
{
    printf("%p\n", enter());
    return 0;
}

int *enter()
{
    char abc[99];
    static int *x[99];
    int i = 0;
    char delim[] = ",";
    char *p;
    // int *num;
    printf("请输入几个数字(以逗号分隔)\n");
    scanf("%s", abc);
    p = strtok(abc, delim);
    while (p != NULL)
    {
        x[i] = (int *)p;
        printf("%p %p\n", p, x[i]);
        i++;
        p = strtok(NULL, delim);
    }
    // printf("%c", x[1]);
    return *x;
}

int mean(int i, ...)
{
    va_list ap;
    va_start(ap, i);
    int *num = va_arg(ap, int *);
    printf("%d", *num);
    va_end(ap);
    return 0;
}