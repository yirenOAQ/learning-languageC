#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//斐波那契数列2(正向思路，效率高)
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
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