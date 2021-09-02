#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_leap_year(int n)
{
	if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int i = 0;
	int count = 0;
	printf("以下为闰年\n");
	for (i = 1000; i <= 2000; i++)
	{
		if (is_leap_year(i) == 1)
		{
			printf("%d\n", i);
			count++;
		}
	}
	printf("共有%d个闰年", count);
	return 0;
}