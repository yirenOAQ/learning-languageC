#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//&&Âß¼­Óë
//||Âß¼­»ò

int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int d = -1;
	if (a > 0 && b > 0)
	{
		printf("%d\n", c);
	}
	else
	{
		printf("%d\n", d);
	}
	if (a > 0 || d > 0)
	{
		printf("%d\n", d);
	}
	else
	{
		printf("%d\n", c);
	}
	return 0;
}