#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 15
#define ALEN 4
typedef struct len
{
    float foclen;
    float fstop;
    char brand[30];
} LENS;
struct MONTHS
{
    char name[LEN];
    char abb[ALEN];
    int Days;
    int month;
};
struct name
{
    char first[20];
    char last[20];
};
struct bem
{
    int limbs;
    struct name title;
    char type[30];
};
struct fullname
{
    char fname[20];
    char lname[20];
};
struct bard
{
    struct fullname name;
    int born;
    int died;
};
char *pri(const struct bem *);
int days(const struct MONTHS *months, int n);
void eatline(void);
char *s_gets(char *, int n);

int main(void)
{
    // struct MONTHS year[12] = {
    //     {"January", "Jan", 31, 1},
    //     {"February", "Feb", 28, 2},
    //     {"March", "Mar", 31, 3},
    //     {"April", "Apr", 30, 4},
    //     {"May", "May", 31, 5},
    //     {"June", "Jun", 30, 6},
    //     {"July", "Jul", 31, 7},
    //     {"August", "Aug", 31, 8},
    //     {"September", "Sep", 30, 9},
    //     {"October", "Oct", 31, 10},
    //     {"November", "Nov", 30, 11},
    //     {"December", "Dec", 31, 12},
    // };
    // int n;

    // puts("Please enter a number of the months");
    // scanf("%d", &n);
    // while(n> 12 || n< 1)
    // {
    //     puts("Please enter 1-12");
    //     scanf("%d", &n);
    // }
    // int day = days(year, n);
    // printf("This month has %d day", day);

    // struct bem deb = {
    //     6,
    //     {"Berbnazel", "Gwolkapwolk"},
    //     "Arcruran"};

    // struct bem *pd;
    // pd = &deb;

    // char *a = pri(pd);
    // printf("%s", a);

    // struct bard willie;
    // struct bard *pt = &willie;

    // scanf("%d", &willie.born);
    // scanf("%d", &(pt->born));
    // scanf("%s", willie.name.lname);
    // scanf("%s", pt->name.lname);
    // printf("%d\n", willie.born);
    // printf("%d\n", pt->born);
    // printf("%s\n", pt->name.lname);

    // return 0;
}

int days(const struct MONTHS *months, int n)
{
    if (n > 12 || n < 1)
    {
        return 0;
    }
    else
    {
        return months[n].Days;
    }
}

void eatline(void)
{
    while (getchar() != '\n')
    {
        continue;
    }
}

char *s_gets(char *st, int n)
{
    char *rel_val;
    char *find;
    rel_val = fgets(st, n, stdin);
    if (rel_val)
    {
        find = strchr(st, '\n');
        if (find)
        {
            *find = '\0';
        }
        else
        {
            eatline();
        }
    }
    return rel_val;
}

char *pri(const struct bem *ne)
{
    int a = ne->limbs;
    int count = 1;
    while (a != 0)
    {

        a /= 10;
        count++;
    }
    char s[count];
    char *ab = (char *)malloc(strlen(ne->title.first) + strlen(ne->title.last) + strlen("is a ") + strlen(s) + strlen("-limbed ") + strlen(ne->type) + 3);
    strcpy(ab, ne->title.first);
    strcat(ab, " ");
    strcat(ab, ne->title.last);
    strcat(ab, " is a ");
    itoa(ne->limbs, s, 10);
    strcat(ab, s);
    strcat(ab, "-limbed ");
    strcat(ab, ne->type);

    return ab;
}