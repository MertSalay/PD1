#include<stdio.h>

int main()
{
    int A,B,C;
    printf("A:"); scanf("%d",&A);
    printf("B:"); scanf("%d",&B);
    printf("C:"); scanf("%d",&C);
    if(A>=B && A>=C)
        printf("%d",A);
    else if(B>=A && B>=C)
        printf("%d",B);
    else
        printf("%d",C);
    return 0;
}