#include<stdio.h>

int main()
{
    int N;
    printf("number:"); scanf("%d",&N);
    if(N%2==0){
    printf("Even");
    };
    if(N%2==1){
    printf("Odd");
    };
    return 0;
}