#include <stdio.h>
int main()
{
   int n,r=0,m;

   printf("Number:"); scanf("%d", &n);
   m=n;
   while (m!=0)
   {
      r=(r*10)+(m%10), m/=10;
   }

   if (n==r)
      printf("%d is palindrome", n);
   else
      printf("%d is not palindrome", n);

   return 0;
}
