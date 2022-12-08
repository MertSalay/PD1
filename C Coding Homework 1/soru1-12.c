#include<stdio.h>

int main()
{
    int LOW,HIGH,STEP;
    LOW=0,HIGH=100,STEP=5;
    while(LOW<=HIGH){
        printf("%d\n",LOW); LOW+=STEP;
        };
    return 0;
}