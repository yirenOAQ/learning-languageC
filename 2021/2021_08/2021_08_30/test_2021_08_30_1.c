#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//将三个整形的大小从大到小输出

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int tmp = b;
		b = a;
		a = tmp;
	}	
	if (a < c)
	{
		int tmp = c;
		c = a;
		a = tmp;
	}
	if (b < c)
	{
		int tmp = c;
		c = b;
		b = tmp;
	}
	printf("%d %d %d", a, b, c);
	return 0;
}