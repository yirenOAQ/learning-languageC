#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	double a, b, c;
	int i = 0;
	int j = 0;
	scanf("%lf%lf%lf", &a, &b, &c);
	if (a + b > c && b + c > a && a + c > b)
	{
		if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)
		{
			i = 1;//��ֱ��������
		}
		if (a == b || b == c || a == c)
		{
			j = 1;//�ǵ���
			if (a == b || b == c)
			{
				j = 2;//�ǵȱ�
			}
		}
		if (i == 1)
		{
			if (j == 1)
				printf("�ǵ���ֱ��������");
			else
				printf("��ֱ��������");
		}
		if (j == 2)
		{
			printf("�ǵȱ�������");
		}
		if (j == 1 && i != 1)
		{
			printf("�ǵ���������");
		}
		if (j != 1 && j != 2 && i != 1)
		{
			printf("��һ��������");
		}
	}
	else
	{
		printf("���ܹ���������");
	}
	return 0;
}