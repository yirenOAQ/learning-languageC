#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int add(int x, int y)          //定义一个函数
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	/*int sum = num1 + num2; */  //此方法不是函数的方法
	int sum = add(num1, num2);    //用函数的方法解决问题,所以先对函数进行一个定义
	printf("%d", sum);
	return 0;
}