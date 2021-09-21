#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//判断两个数的二进制位的不同位 优化版本
int NumberOf(int n)
{
	int count = 0;
	while (n);
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int ret = m ^ n;
	int count = NumberOf(ret);
	printf("两者二进制位的不同位数量为%d", count);
	return 0;
}
