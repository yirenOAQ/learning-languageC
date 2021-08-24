#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//下标引用操作符：[]

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n",arr[5]);        //引用第六个数字6，故打印6
	return 0;
}