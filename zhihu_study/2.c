#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int flag = 0;
    char passwd[10];

    memset(passwd, 0, sizeof(passwd));
    strcpy(passwd, argv[1]);

    if (0 == strcmp("123456", passwd))
    {
        flag = 1;
    }

    if (flag)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }

    return 0;
}