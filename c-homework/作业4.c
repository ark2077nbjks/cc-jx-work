#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char a,b;
	printf("please input a letter:\n");
	scanf("%c",&a);
	b = a + 32;
	printf("%c\n",b);
	printf("%d\n",b);
	
	return 0;

}