#include<stdio.h>

int main()
{
    int c=0,d=0;
    while(c<50) d+=c, c++;
    printf("sum:%d",d);
    return 0;
}