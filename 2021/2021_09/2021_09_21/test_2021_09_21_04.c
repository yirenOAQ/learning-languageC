#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//判断两个数的二进制位的不同位
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((m >> 1) & 1) != ((n >> 1) & 1));
		{
			count++;
		}
	}
	printf("两者二进制位的不同位数量为%d", count);
	return 0;
}
