#include <stdio.h>
#define LEN 2010
const char *msgs[5] =
{
    "   Thank you for the wonderful evening, ",
    "You certainly prove that a ",
    "is a special kind of guy. We must get together",
    "over a delicious",
    "and have a few laughs"
};

struct names {
    char first[LEN];
    char last[LEN];
};

struct guy {
    struct names handlers;
    char favfood[LEN];
    char job[LEN];
    float income;
};

int main(void)
{
    struct guy fellow =
    {
        {"Alex", "Herry"},
        "grilled salmon",
        "programmer",
        0
    };

    printf("Dear %s, \n\n", fellow.handlers.first);
    printf("%s%s.\n", msgs[0], fellow.handlers.first);
    printf("%s%s\n", msgs[1], fellow.job);
    printf("%s\n", msgs[2]);
    printf("%s%s%s", msgs[3], fellow.favfood, msgs[4]);
    if (fellow.income > 150000.00)
        puts("!!");
    else if ( fellow.income > 75000.00)
        puts("!");
    else
        puts(".");
    printf("\n%40s%s\n", " ", "See you soon,");
    printf("%40s%s\n", " ", "Shalala");

    return 0;
}
