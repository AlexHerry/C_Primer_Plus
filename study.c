#include <stdio.h>

void PrintN(int N);
void PrintN_2(int N);
//int main(void) 
//{
//    int num = 5;
    // void PrintN(int N);
    //void PrintN_2(int N);
//    PrintN_2(num);
//    return 0;
//}

void PrintN( int N )
{
    int i;
    for (i = 1; i <= N; i++){
        printf("%d\n", i);
    }
    return;
}

void PrintN_2( int N)
{
    if (N){
        PrintN_2(N - 1);
        printf("%d\n", N);
    }
    return;
}