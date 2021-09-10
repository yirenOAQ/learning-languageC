#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//求一个整数存储在内存中的二进制中1的个数
int main()
{
	int a = 0;
	scanf("%d", &a);
	int count = 0;
	int b = 1;
	while (a / b != 0)
	{
		if ((a & b) == b)
		{
			count++;
		}
		b = b << 1;
	}
	printf("二进制中1的个数为%d", count);
	return 0;
}