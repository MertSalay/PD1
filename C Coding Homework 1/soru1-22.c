#include<stdio.h>

int main()
{
    int a=0,n,count=0,f,l;
    printf("number:"); scanf("%d",&n);
    while(a<=n){
        count++;
        a=pow(10,count);
        };
    a/=10;
    f=n/a,l=n%10;
    printf("%d",n-(f*a)-l+(l*a)+f);
    
}