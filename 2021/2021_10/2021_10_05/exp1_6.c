#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int num = 0;
	scanf("%d", &num);
	printf("%d", num % 10);
	printf("%d", num / 10 % 10);
	printf("%d", num/100);
	return 0;
}