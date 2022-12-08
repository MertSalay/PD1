#include<stdio.h>

int main()
{
    int n;
    float S=0,m;
    printf("even number:"); scanf("%d",&n);
    if(n%2==0){
        m=n;
        while(m>=2){
            S+=1/m, m-=2;
            };
        printf("S=%f",S);
        };
    if(n%2==1)
        printf("enter an even number");
    return 0;
}