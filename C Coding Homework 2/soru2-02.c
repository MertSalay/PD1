#include <math.h>
#include <stdio.h>
int main() {
    double a,b,c,d,r1,r2,realPart,imagPart;
    printf("a:");scanf("%lf",&a);
	printf("b:");scanf("%lf",&b);
	printf("c:");scanf("%lf",&c);
	d=b*b-4*a*c;

    if (d > 0){
        r1=(-b+sqrt(d))/(2 * a);
        r2=(-b-sqrt(d))/(2 * a);
        printf("roots are %.2lf and %.2lf",r1,r2);
    }
    else if (d==0){
        r1=r2=-b/(2*a);
        printf("root is %.2lf;", r1);
    }
    else {
        realPart=-b/(2*a);
        imagPart=sqrt(-d)/(2*a);
        printf("roots are %.2lf+%.2lfi and %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }
	return 0;
} 
