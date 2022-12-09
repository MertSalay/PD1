#include<stdio.h>
main()
{
	int b,a,a0=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0;
	printf("number:"); scanf("%d",&a);
	while(a>0){
		b=a%10;
		if(b==0) a0++;
		else if(b==1) a1++;
		else if(b==2) a2++;
		else if(b==3) a3++;
		else if(b==4) a4++;
		else if(b==5) a5++;
		else if(b==6) a6++;
		else if(b==7) a7++;
		else if(b==8) a8++;
		else a9++;
		a/=10;
	}
	printf("0:%d\n1:%d\n2:%d\n3:%d\n4:%d\n5:%d\n6:%d\n7:%d\n8:%d\n9:%d",a0,a1,a2,a3,a4,a5,a6,a7,a8,a9);
	return 0;
}
