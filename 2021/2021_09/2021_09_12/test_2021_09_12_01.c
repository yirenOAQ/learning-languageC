#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a = 7;
	a = a + --a;    //������ʽ
	printf("%d", a);
	return 0;
}