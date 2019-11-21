#include <crtdefs.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
char *s_gets(char *st, int n);

enum spectrum
{
    red,
    orange,
    yellow,
    green,
    blue,
    violet
};
const char *colors[] = {"red", "orange", "yellow", "green", "blue", "violet"};
#define LEN 30

int main(void)
{
    char choice[LEN];
    enum spectrum color;
    bool color_is_found = false;

    puts("Enter a color (empty line to quit): ");
    while(s_gets(choice, LEN) != NULL && choice[0] != '\0'){
        for (color = red; color <= violet; color++){
            if (strcmp(choice, colors[color]) == 0){
                color_is_found = true;
                break;
            }
        }
        if (color_is_found)
            switch (color){
                case red:
                    puts("Roses are red.");
                    break;
                case orange:
                    puts("Popies are orange.");
                    break;
                case yellow:
                    puts("Sunflowers are yellow.");
                    break;
                case green:
                    puts("Grass is green.");
                    break;
                case blue:
                    puts("Blue are blue.");
                    break;
                case violet:
                    puts("Violets are violet.");
                    break;
            }
        else
            printf("I don't know about the color %s.\n", choice);
        color_is_found = false;
        puts("Next Color, please (empty line to quit):");
    }
    puts("GoodBye!");

    return 0;
}

char * s_gets(char *st, int n){
    char *rel_val;
    char *find;

    rel_val = fgets(st, n, stdin);
    if(rel_val){
        find = strchr(st, '\n');
        if(find){
            *find = '\0';
        }else {
            while(getchar() != '\n'){
                continue;
            }
        }
    }
    return rel_val;
}