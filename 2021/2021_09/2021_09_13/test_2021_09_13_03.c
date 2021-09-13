#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int my_strlen2(char *str)
{
	char *start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}
int main()
{
	int length = my_strlen2("abc");
	printf("%d\n", length);
	return 0;
}