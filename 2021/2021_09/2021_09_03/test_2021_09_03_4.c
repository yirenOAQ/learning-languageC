#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Fac(int n)
{
	if (n > 1)
	{
		return n * Fac(n - 1);
	}
	else
	{
		return 1;
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int num = Fac(n);
	printf("%d\n", num);
	return 0;
}