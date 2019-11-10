#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SLEN 81
struct namect {
    char *fname;
    char *lname;
    int letters;
};

void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect *);
void cleanup(struct namect *);
char *s_gets(char *, int n);

int main(void)
{
    struct namect person;

    getinfo(&person);
    makeinfo(&person);
    showinfo(&person);
    cleanup(&person);

    return 0;
}

void getinfo(struct namect *a)
{
    char temp[SLEN];

    printf("Please enter your first name.\n");
    s_gets(temp, SLEN);
    a->fname = (char *)malloc(strlen(temp) + 1);
    strcpy(a->fname, temp);

    printf("Please enter yout last name.\n");
    s_gets(temp, SLEN);
    a->lname = (char *) malloc(strlen(temp) + 1);
    strcpy(a->lname, temp);
}

void makeinfo(struct namect *a)
{
    a->letters = strlen(a->fname) + strlen(a->lname);
}

void showinfo(const struct namect *a)
{
    printf("%s %s, your name contains %d letters.\n", a->fname, a->lname, a->letters);
}

void cleanup(struct namect *a)
{
    free(a->fname);
    free(a->lname);
}

char *s_gets(char *a, int n)
{
    char *rel_val;
    char *find;

    rel_val = fgets(a, n, stdin);
    if (rel_val)
    {
        find = strchr(a, '\n');
        if (find)
        {
            *find = '\0';
        }
        else {
            while (getchar() != '\n')
                continue;
        }
    }
    return rel_val;
}