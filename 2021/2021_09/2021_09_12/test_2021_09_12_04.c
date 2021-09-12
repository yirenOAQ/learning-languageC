#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[] = "hello world";
	printf("%d %d\n", sizeof(str), strlen(str));
	//sizeof是操作符，计算变量/类型所占内存大小，单位是字节
	//strlen是函数，计算\0前出现的字符个数
	return 0;
}