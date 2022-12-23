#include<stdio.h>

int main()
{
    int n1, n2, max;
	printf("number:"); scanf("%d",&n1);
    printf("number:"); scanf("%d",&n2);
    max = (n1 > n2) ? n1 : n2;
	while(1){
        if ((max % n1 == 0) && (max % n2 == 0)) {
            printf("The LCM is %d.",max);
            break;}
        ++max;}
    return 0;
}
