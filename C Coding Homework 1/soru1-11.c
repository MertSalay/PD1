#include<stdio.h>

int main()
{
    int n,sum,count;
    count=1,sum=0;
    while(count<11){
        printf("Enter number:"); scanf("%d",&n);
        printf("%d\n",n); sum+=n, count++;
        };
    printf("Sum:%d",sum);
    return 0;
}