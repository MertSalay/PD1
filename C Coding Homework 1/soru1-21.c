#include<stdio.h>

int main()
{
    int a=0,n,count=0;
    printf("number:"); scanf("%d",&n);
    while(a<=n){
        count++;
        a=pow(10,count);
        };
    printf("first:%d\nlast:%d",10*n/a,n%10);
}