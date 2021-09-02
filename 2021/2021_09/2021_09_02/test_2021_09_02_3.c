#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Max(int x, int y, int *num)
{
	int z = 0;
	if (x > y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	(*num)++;
	return z;
}

int main()
{
	int num = 0;
	do {
		int a = 0;
		int b = 0;
		scanf("%d%d", &a, &b);
		int c = Max(a, b,&num);
		printf("最大值为%d\n", c);
		printf("Max执行次数:%d\n", num);
	} while (num <= 5);
	return 0;
}