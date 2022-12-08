#include <stdio.h>
int main()
{
    int n1,n2;
    printf("1st number:"); scanf("%d",&n1);
    printf("2nd number:"); scanf("%d",&n2);
	while(n1!=n2){
        if(n1 > n2) n1-=n2;
        else n2-=n1;
    }
    printf("EBOB = %d",n1);
	return 0;
}
