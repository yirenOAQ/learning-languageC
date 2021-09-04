#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i = 0;
	double num = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			num = num - 1.0 / i;
		}
		else
		{
			num = num + 1.0 / i;
		}
	}
	printf("%lf\n", num);
	return 0;
}