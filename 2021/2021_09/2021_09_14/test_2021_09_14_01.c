#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int *p = arr;
	int i = 0;
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	for (i = 0; i < 10; i++)
	{
		printf("%p <==> %p\n", &arr[i], p + i);
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}