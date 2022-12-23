#include<stdio.h>
#include<math.h>

int main()
{
    int a=2,b=1,c=2,n;
    printf("number:"); scanf("%d",&n);
    while(c<n){
        while(a<c && b!=0) b=c%a,a++;
        if(b!=0) printf("%d\n",c);
        a=2,b=1,c++;}
    return 0;
}