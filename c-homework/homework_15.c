#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a, b, n;
	for (a = 1; a <= 9; a++)
		for (b = 0; b <= 9; b++)
		{
			n = 1000 * a + 200 + 10 * b + 3;
			if (n % 23 == 0)
				printf("%d ", n);
		}
	printf("\n");
	system("pause");
	return 0;
}
