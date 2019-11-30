#include <ctype.h>
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
struct gas
{
    float distance;
    float gals;
    float mpg;
};
enum choices
{
    no,
    yes,
    maybe
};
char *pri(const struct bem *);
int days(const struct MONTHS *months, char n[]);
void eatline(void);
char *s_gets(char *, int n);
struct gas gasFun(struct gas trip);
char *(*fun)(char *, char);

int main(void)
{
    struct MONTHS year[12] = {
        {"january", "Jan", 31, 1},
        {"february", "Feb", 28, 2},
        {"march", "Mar", 31, 3},
        {"april", "Apr", 30, 4},
        {"may", "May", 31, 5},
        {"june", "Jun", 30, 6},
        {"july", "Jul", 31, 7},
        {"august", "Aug", 31, 8},
        {"september", "Sep", 30, 9},
        {"october", "Oct", 31, 10},
        {"november", "Nov", 30, 11},
        {"december", "Dec", 31, 12},
    };
    char n[LEN];

    puts("Please enter a name of the months");
    while (1)
    {
        scanf("%s", n);
        int i = 0;
        while (*(n + i))
        {
            *(n + i) = tolower(*(n + i));
            i++;
        }
        int day = days(year, n);
        if (!day)
        {
            puts("Please enter a valid month");
        } else {
            printf("This month has %d day\n", day);
            break;
        }
    }

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

    // struct gas abc = {
    //     10.2,
    //     10.3,
    //  };

    // abc = gasFun(abc);
    // printf("%.2f", abc.mpg);
    system("pause");
    return 0;
}

int days(const struct MONTHS *months, char n[])
{
    for (int i = 0; i < 12; i++)
    {
        if (!strcmp(n, months->name))
        {
            return months->Days;
        };
        months++;
    };
    return 0;
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

struct gas gasFun(struct gas trip)
{
    trip.mpg = trip.distance + trip.gals;
    return trip;
}