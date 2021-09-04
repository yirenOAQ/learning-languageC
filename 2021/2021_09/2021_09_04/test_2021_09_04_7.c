#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_table(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d¡Á%d = %d ", j, i, i * j);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print_table(n);
	return 0;
}