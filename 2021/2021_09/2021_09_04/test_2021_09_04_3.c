#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i = 0;
	double num = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		num += flag * 1.0 / i;
		flag = -flag;
	}
	printf("%lf\n", num);
	return 0;
}