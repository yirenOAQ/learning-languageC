#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//同时计算1~n的和，积（阶乘），阶乘之和
int main()
{
	int n = 0;
	scanf("%d", &n);
	int sum = 0;
	int num = 0;
	int ret = 1;
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		sum += i;
		int j = 0;
		for (j = 0; j < i; j++);
		{
			ret *= i;
			num += ret;
		}
	}
	printf("和：%d\n积(阶乘)：%d\n阶乘之和为%d", sum, ret,num);
	return 0;
}