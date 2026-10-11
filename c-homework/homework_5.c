#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int a, b;
	printf("please input 2 num:\n");
	scanf("%d%d", &a, &b);
	if (a > b)
	{
			printf("the bigger is%d\n", a);
	}
	else
	{
		printf("the bigger is%d\n", b);
	}
	return 0;
}

