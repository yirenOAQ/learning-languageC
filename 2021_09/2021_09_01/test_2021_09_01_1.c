#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello word";
	strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}