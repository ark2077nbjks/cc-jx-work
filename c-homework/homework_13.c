#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n, x, y, z;
	/* 水仙花数是： */
	printf("\xcb\xae\xcf\xc9\xbb\xa8\xca\xfd\xca\xc7\xa3\xba");
	for (n = 100; n <= 999; n++)
	{
		x = n / 100;
		y = n / 10 % 10;
		z = n % 10;
		if (x*x*x + y*y*y + z*z*z == n)
			printf("%d ", n);
	}
	printf("\n");
	system("pause");
	return 0;
}
