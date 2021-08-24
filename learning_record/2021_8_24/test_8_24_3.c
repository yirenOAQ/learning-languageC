#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//条件操作符（三目操作符）

int main()
{
	int a = 0;
	int b = 3;
	int max = 0;
	//if (a > b)             //用if else进行表达
	//{
	//	max = a;
	//}
	//else
	//{
	//	max = b;
	//}
	//printf("%d\n", max);
	max = a > b ? a : b;
	printf("%d\n", max);     //三目操作符的方法
	return 0;
}

