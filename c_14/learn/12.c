#include <stdio.h>
#include <stdlib.h>

struct flex
{
    size_t count;
    double average;
    double scores[];
};

void showFlex(const struct flex *);

int main(void)
{
    struct flex *p1, *p2;
    int n = 5;
    int i;
    int tot = 0;

    p1 = malloc(sizeof(struct flex) + n * sizeof(double));
    p1->count = n;
    for (i = 0; i < n; i++)
    {
        p1->scores[i] = 20.0 - i;
        tot += p1->scores[i];
    }
    p1->average = tot / n;
    showFlex(p1);
    free(p1);
    n = 9;
    tot = 0;
    p2 = malloc(sizeof(struct flex) + n * sizeof(double));
    p2->count = n;
    for (i = 0; i < n; i++)
    {
        p2->scores[i] = 20.0 - i/2.0;
        tot += p2->scores[i];
    }
    p2->average = tot / n;
    showFlex(p2);
    free(p2);
    return 0;
}

void showFlex(const struct flex *a)
{
    int i;
    printf("Scores : ");
    for (i = 0; i < a->count; i++)
    {
        printf("%g ", a->scores[i]);
    }
    printf("\nAverage: %g\n", a->average);
}