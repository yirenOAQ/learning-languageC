#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//斐波那契数列1(不考虑效率，内存占用等问题)
int Fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}
}

int main()
{
	int n = 0;
	printf("你想知道第几个数的值呢？");
	scanf("%d", &n);
	int num = Fib(n);
	printf("这个数是%d\n", num);
	return 0;
}