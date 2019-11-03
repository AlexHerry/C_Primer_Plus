#include <stdio.h>
int code(void);

int main(void)
{
    code();
    return 0;
}

int code(void)
{
    int code, status;
    printf("--------------------------------------------------\n");
    printf("Please choose one of the following:\n");
    printf("1) copy files               2) move files\n");
    printf("3) remove files             4) quit\n");
    printf("--------------------------------------------------\n");
    while ((status = (scanf("%d", &code))) != 1 || (code < 1 || code > 4))
    {
        if (status != 1)
            scanf("%*s");
        printf("You are wrong\n");
    }
        

    return code;
}