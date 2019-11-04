#include <stdio.h>
#include <string.h>
#define NLEN 10

struct namect
{
    char fname[NLEN];
    char lname[NLEN];
    int letters;
};

void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect *);
char *s_get(char *st, int n);

int main(void)
{
    struct namect person;

    getinfo(&person);
    makeinfo(&person);
    showinfo(&person);

    return 0;
}

void getinfo(struct namect *per)
{
    // char *a = per->fname;
    // a = "Alex";
    printf("Please enter your first name.\n");
    // printf("%s")
    s_get(per->fname, NLEN);
    printf("Please enter your last name.\n");
    s_get(per->lname, NLEN);
}

void makeinfo(struct namect *per)
{
    per->letters = strlen(per->fname) + strlen(per->lname);
}

void showinfo(const struct namect *per)
{
    printf("%s %s, your name contains %d letters", per->fname, per->lname, per->letters);
}

char *s_get(char *st, int n)
{
    char *ret_val;
    char *find;
    ret_val = fgets(st, n, stdin);

    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
        {
            *find = '\0';
        }
        else
        {
            while (getchar() != '\n')
            {
                continue;
            }
        }
    }
    return ret_val;
}
