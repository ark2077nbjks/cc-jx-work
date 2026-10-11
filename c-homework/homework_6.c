#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char a = 0;
	printf("please input :\n" );
	scanf(" %c", &a);
	if ((a >= 'A' && a <= 'Z')||(a >= 'a' && a <= 'z'))
	{
		printf("%c is english letter\n", a);
	}
	else
	{
		printf("%c is not english letter\n", a);
	}
	return 0;

}