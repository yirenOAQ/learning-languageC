#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Exchange(int *x, int *y)
{
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	printf("交换前%d和%d\n", a, b);
	Exchange(&a, &b);
	printf("交换后%d和%d\n", a, b);
	return 0;
}