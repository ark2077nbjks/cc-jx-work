#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>

int main(void)
{
	int a, b, c;
	double d, s;
	printf("please input the num:\n");
	scanf("%d%d%d",& a, &b, &c);
	if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a)
	{
		s = (a + b + c) / 2.0;
		d = sqrt(s * (s - a) * (s - b) * (s - c));
		printf("%f\n", d);
	}
	else
	{
		printf("error cannot be\n");

	}
	return 0;

}