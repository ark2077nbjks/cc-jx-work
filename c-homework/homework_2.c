#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
main()
{
int a,b,c;
printf("enter three datas:\n");
	
scanf("%d%d%d",&a,&b,&c);
double d;
	d = (a + b + c) / 3.0;
printf("%.2f\n",d);
	
return 0;

}
