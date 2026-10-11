#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int a;
	printf("please enter serial:");
	scanf("%d", &a);
	switch (a % 4)
	{
	case 1:
		printf("the group is A\n");
		break;
	case 2:
		printf("the group is B\n");
		break;
	case 3:
		printf("the group is C\n");
		break;
	case 4:
		printf("the group is D\n");
		break;
	}
	return 0;
}