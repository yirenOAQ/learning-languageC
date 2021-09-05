#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Digitsum(int n)
{
	int sum = 0;
	if (n >= 10)
	{
		return n % 10 + Digitsum(n / 10);
	}
	else
	{
		return n;
	}
}
int main()
{
	int num = 1729;
	int sum = Digitsum(num);
	printf("%d\n", sum);
	return 0;
}