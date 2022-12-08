#include<stdio.h>

int main()
{
    int C;
    printf("Temprature:"); scanf("%d",&C);
    if(C>0){
    printf("Above the freezing point");
    };
    if(C<0){
    printf("Below the freezing point");
    };
    return 0;
}