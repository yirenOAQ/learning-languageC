#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int flag = 0;
	if (n % 2 == 0)
		flag = 1;
	n = (n + 1) / 2;
	int i = 0, j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
			printf("   ");
		for (j = 1; j <= 2 * i - 1; j++)
			printf("*  ");
		printf("\n");
	}
	if (flag)
	{
		for (j = 1; j <= 2 * n - 1; j++)
			printf("*  ");
		printf("\n");
	}
	for (i = n - 1; i >= 1; i--)
	{
		for (j = 1; j <= n - i; j++)
			printf("   ");
		for (j = 1; j <= 2 * i - 1; j++)
			printf("*  ");
		printf("\n");
	}
	return 0;
}