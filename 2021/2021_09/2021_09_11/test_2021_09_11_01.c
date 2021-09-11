#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a = 10;
	printf("%p\n", &a);
	int *pa = &a;
	*pa = 20;
	printf("%d\n", a);
	return 0;
}