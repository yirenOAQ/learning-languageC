#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//打印质数2

int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 2; i <= 200; i++)
	{
		int flag = 1;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d\n", i);
			count++;
		}
	}
	printf("总共有%d个素数\n", count);
	return 0;
}