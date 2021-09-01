#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int num = 0;
	scanf("%d",&num);
	if (num % 5 == 0)
		printf("yes");
	else
		printf("no");
	return 0;
}