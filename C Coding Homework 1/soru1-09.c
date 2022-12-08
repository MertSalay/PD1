#include<stdio.h>

int main()
{
    int LOW,HIGH,NUMBER;
    printf("LOW:"); scanf("%d",&LOW);
    printf("HIGH:"); scanf("%d",&HIGH);
    printf("NUMBER:"); scanf("%d",&NUMBER);
    while(LOW<=HIGH){
    if(LOW%NUMBER==0){
    printf("%d\n",LOW);
    };
    LOW++;
    };
    return 0;
}