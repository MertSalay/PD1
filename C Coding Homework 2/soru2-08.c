#include<stdio.h>
#include<math.h>

int main()
{
    int i, j, end, isPrime, sum=0;
    printf("Max Number:"); scanf("%d", &end);

    for(i=2; i<=end; i++){
        isPrime = 1;
        for(j=2; j<=i/2 ;j++){
            if(i%j==0) {isPrime=0; break;}}
		if(isPrime==1) sum += i;}

    printf("Sum=%d",sum);
    return 0;
}
