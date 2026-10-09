#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int a, i, first;
	printf("please enter a positive integer:");
	scanf("%d", &a);
	printf("all divisors are:");
	first = 1;
	for (i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			if (!first) printf(",");
			printf("%d", i);
			first = 0;
		}
	}
	printf("\n");
	return 0;
}
