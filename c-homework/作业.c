#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PI 3.14159
main()
{
	double a, b;
	a = 0;b = 0;//c�������d��ֱ��
	printf("������ֱ��r��");//����뾶
	scanf("%lf", &b);//�������
	a = PI * b * b;//����ԭ�����
	printf("Բ��sΪ��%lf\n", a);//���ԭ�����:s
	return 0;
}