#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��ʶ������

int main()
{
	int num1 = 10;
	int arr[10] = { 0 };
	printf("%d\n", sizeof(num1));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(arr));     //���������ܴ�С
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n",sz);            //���������и���
	return 0;
}