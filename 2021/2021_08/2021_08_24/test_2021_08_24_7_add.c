#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//extern声明外部符号（联系test_8_24.c）
extern int num1;
extern int num2;

int main()
{
	printf("%d\n", num1);
	//printf("%d\n", num2);        //此处执行会报错，因为static修饰过的全局变量int num2只能在其所在的源文件使用
	return 0;
}