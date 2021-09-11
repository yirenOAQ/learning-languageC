#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a = 3, b = 5, c = 0;
	int d = (c = 1, a = c + 3, b = a - 4,c += b);
	printf("%d\n", d);
	return 0;
}