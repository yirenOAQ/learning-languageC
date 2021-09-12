#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int arr[] = { 1,2,(3,4),5 };
	printf("%d\n", sizeof(arr));    //16
	return 0;
}