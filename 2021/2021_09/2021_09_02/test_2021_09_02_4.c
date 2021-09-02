#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int length = strlen("abc");
	printf("%d\n", length);
	printf("%d\n", strlen("abc"));    //¡¥ Ω∑√Œ 
	return 0;
}