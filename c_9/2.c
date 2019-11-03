#include <stdio.h>
void chline(char *, int, int);

int main(void)
{
    char ch;
    int x, y;
    // printf("%p", &ch);
    printf("请问你需要什么字符:\n");
    scanf("%c", &ch);
    // printf("%p", &ch);
    printf("请问你需要几行:\n");
    scanf("%d", &y);
    printf("请问你需要几列:\n");
    scanf("%d", &x);
    chline(&ch, x, y);
    return 0;
}

void chline(char *ch, int x, int y)
{
    printf("%p", &ch);
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%c", *ch);
        }
        printf("\n");
    }
}