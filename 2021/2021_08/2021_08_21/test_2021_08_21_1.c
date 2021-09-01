#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//常量与变量

const int num = 20;
int main()
{
	int num = 100;
	printf("num=%d\n",num );
	return 0;
}

//局部变量优先于全局变量
//const 修饰过的常量为常变量