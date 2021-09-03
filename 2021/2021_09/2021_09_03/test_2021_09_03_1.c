#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//函数的递归

void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	unsigned int num = 0;
	scanf("%u", &num);   //例如输入1234，则打印1 2 3 4
	print(num);
	return 0;
}