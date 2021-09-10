#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a = 13;
	printf("a = %d\n", a);
	a = a | (1 << 4);
	printf("a = %d\n", a);
	return 0;	
}