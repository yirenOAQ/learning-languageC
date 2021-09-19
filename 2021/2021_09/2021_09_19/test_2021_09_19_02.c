#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void my_strcpy(char *dest, const char*src)
{
	asssert(src != NULL && dest != NULL);
	while (*dest++ = *src++)
	{
		;
	}
}

int main()
{
	char arr1[20] = "xxxxxxxxx";
	char arr2[] = "hello world";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}