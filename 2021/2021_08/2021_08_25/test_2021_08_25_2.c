#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));    //结果都是一样，x86是4个字，x64是8个字节
	return 0;
}