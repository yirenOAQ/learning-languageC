#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//不创建新的变量，交换a与b的值
//^异或操作符，没有进位，不会溢出
int main()
{
	int a = 3;
	int b = 5;
	printf("a = %d  b = %d \n", a, b);
	a = a ^ b;
	b = a ^ b;     //此算法底层逻辑：（这一行中）b = a^b^b=a^0=a
	a = a ^ b;
	printf("a = %d  b = %d \n", a, b);
	return 0;
}