#include <stdio.h>
#define LEN 20

struct names {
    char first[LEN];
    char last[LEN];
};

struct guys {
    struct names handles;
    char favfood[LEN];
    char job[LEN];
    float income;
};

int main(void)
{
    struct guys fellow[2] = {
        { 
            {"Alex", "Herry"},
            "grilled salmon",
            "programmer",
            9999.00
        },
        {
            {"Alex", "Herry"},
            "tripe",
            "tabloid editor",
            432400.00
        }
    };

    struct guys *him;

    printf("address #1： %p #2: %p\n", &fellow[0], &fellow[1]);
    him = &fellow[0];
    printf("pointer #1:  %p #2: %p\n", him, him + 1);
    printf("him->income is %.2f: (*him).income is %.2f\n",him->income, (*him).income);
    him++;
    printf("him->favfood is %s: him->handles.last is %s\n",him->favfood, (*him).handles.last);

    return 0;
}