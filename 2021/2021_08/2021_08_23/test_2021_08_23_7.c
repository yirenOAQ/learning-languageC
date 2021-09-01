#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//初识操作符

int main()
{
	int num1 = 10;
	int arr[10] = { 0 };
	printf("%d\n", sizeof(num1));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(arr));     //计算数组总大小
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n",sz);            //计算数组中个数
	return 0;
}