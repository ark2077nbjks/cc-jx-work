#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	double a,b;
	printf("input please:\n");
	scanf("%lf", &a);
	if (a >= 3000)
    {
        b = a * 0.6;
    }
    else if (a >= 2000)
    {
        b = a * 0.7;
    }
    else if (a >= 1000)
    {
        b = a * 0.8;
    }
    else
    {
        b = a * 0.9;              
    }

    printf("infact pay:%.1f\n", b);
	
	return 0;
}