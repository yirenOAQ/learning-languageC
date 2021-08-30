#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//求最大公约数(3)

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d", &a, &b);
	while (a % b)
	{
		c = a % b;
		a = b;
		b = c;
	}
	printf("最大公约数是%d", b);
	return 0;
}