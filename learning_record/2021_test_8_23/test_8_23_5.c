#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//操作符：
//算数操作符：+ - * / %
//位移操作符：<< >>（二进制位）
//位操作符：& | ^
//赋值操作符：= += -= *= /= &= |= ^= <<= >>=

int main()
{
	int num1 = 9 / 2;
	float num2 = 9 / 2;
	float num3 = 9.0 / 2;
	int num4 = 9 % 2;
	int num5 = 2 << 2;
	int num6 = 10 >> 1;
	printf("%d\n", num1);   //结果为4
	printf("%f\n", num2);   //结果为4.000000
	printf("%f\n", num3);   //结果为4.500000
	printf("%d\n", num4);   //结果为1
	printf("%d\n", num5);   //结果为8
	printf("%d\n", num6);   //结果为5
	return 0;
}