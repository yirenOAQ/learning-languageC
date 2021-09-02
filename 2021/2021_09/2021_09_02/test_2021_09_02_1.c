#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_prime(int i)
{
	int j = 0;
	for (j = 2; j < i; j++)
	{
		if (i % j == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 2; i <= 200; i++)
	{
		if (is_prime(i) == 1)
		{
			count++;
			printf("%d\n", i);
		}
	}
	printf("共有%d个素数\n", count);
	return 0;
}