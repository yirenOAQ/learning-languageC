#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int main()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
		printf("Ð¡¶Ë");
	else
		printf("´ó¶Ë");
	return 0;
}