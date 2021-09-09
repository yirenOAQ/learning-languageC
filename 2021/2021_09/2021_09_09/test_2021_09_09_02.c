#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//不创建新的变量交换a与b的值
//缺点：可计算范围较小，如果a = a + b 溢出，则出现问题
int main()
{
	int a = 3;
	int b = 5;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return 0;
}