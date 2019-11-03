#include <stdio.h>
#define NAME "Alex"
#define ADDR "CHINA"
#define PLACE "JIANGSU"
#define WIDTH 40

void starbar(void);

int main(void)
{
    starbar();
    printf("%s\n", NAME);
    printf("%s\n", ADDR);
    printf("%s\n", PLACE);
    starbar();

    return 0;
}

void starbar(void)
{
    for (int count = 1; count <= WIDTH; count++)
        putchar('*');
    putchar('\n');
}