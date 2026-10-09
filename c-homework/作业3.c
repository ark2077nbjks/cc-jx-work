#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int n;
	int h,m;
	printf("Enter minutes:\n");//请输入分钟
	scanf("%d", &n);
	h = n / 60;
	m = n % 60;
	printf("\n%dhour%dmin\n",h,m);
	return 0;
}