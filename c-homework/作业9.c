#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int a, c;
	double b;
	printf("please enter weight(kg):\n");
	scanf("%d", &a);
	if (a <= 50 && a > 0)
	{
		b = a * 2.0;
		printf("the fee is %.2f\n", b);
	}
	else if (a > 50)
	{
		c = a - 50;
		b = 100 + 1.5 * c;
		printf("the fee is %.2f\n", b);
	}
	else
	{
		printf("error\n");
	}
	return 0;
}
