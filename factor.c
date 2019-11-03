#include <stdio.h>
long fact(int);
long rfact(int);

int main(void)
{
    int num;
    while (scanf("%d", &num) == 1){
        if (num < 0){
            printf("up\n");
        }else if(num > 13){
            printf("down\n");
        }else{
            printf("%d\n",fact(num));
            printf("--------------------------\n");
            printf("%d\n", rfact(num));
        }
    }
    return 0;
}
long fact(int n)
{
    long ans;
    for (ans = 1; n > 1; n--)
        ans *= n;
    
    return ans;
}

long rfact(int n)
{
    long ans;

    if (n){
        ans = n * rfact(n - 1);
    }else {
        return 1;
    }

    return ans;
}