#include<stdio.h>

int main()
{
    int a,b;
    b=1;
    printf("number:"); scanf("%d",&a);
    while(a>=1){
        b*=a,a--;
        };
    printf("factorial is %d",b);
    return 0;
}