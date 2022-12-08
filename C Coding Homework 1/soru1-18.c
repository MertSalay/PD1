#include<stdio.h>
#include<math.h>

int main()
{
    int b=0,c=0,d,e=0,n;
    printf("decimal number:"); scanf("%d",&n);
    while(n>=1){
        b=n%2;
        d=pow(10,c);
        e+=b*d,n=n/2,c++;
        };
    printf("binary:%d",e);
    return 0;
}