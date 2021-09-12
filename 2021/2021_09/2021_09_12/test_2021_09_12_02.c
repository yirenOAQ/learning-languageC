#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int fun()
{
	static int num = 1;
	return ++num;
}

int main()
{
	int i = fun() - fun()*fun();      //问题代码，VS2017中，2 - 3 * 4 == -10
	printf("%d", i);
	return 0;
}