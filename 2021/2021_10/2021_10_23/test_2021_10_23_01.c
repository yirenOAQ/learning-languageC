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
			i = 1;//是直角三角形
		}
		if (a == b || b == c || a == c)
		{
			j = 1;//是等腰
			if (a == b || b == c)
			{
				j = 2;//是等边
			}
		}
		if (i == 1)
		{
			if (j == 1)
				printf("是等腰直角三角形");
			else
				printf("是直角三角形");
		}
		if (j == 2)
		{
			printf("是等边三角形");
		}
		if (j == 1 && i != 1)
		{
			printf("是等腰三角形");
		}
		if (j != 1 && j != 2 && i != 1)
		{
			printf("是一般三角形");
		}
	}
	else
	{
		printf("不能构成三角形");
	}
	return 0;
}