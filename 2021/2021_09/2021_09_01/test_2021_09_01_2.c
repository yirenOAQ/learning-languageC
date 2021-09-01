#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char arr[] = "hello world";
	printf("%s\n", arr);
	memset(arr, 'X', 8);
	printf("%s\n", arr);
	return 0;
}