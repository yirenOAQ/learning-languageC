#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//打印质数1

int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 2; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
		{ 
			printf("%d\n", i);
			count++;
		}
	}
	printf("总共有%d个素数\n", count);
	return 0;
}