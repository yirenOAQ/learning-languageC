#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age >= 18)
	{
		printf("成年\n");
	}
	else
	{
		printf("未成年\n");
		printf("不能饮酒\n");
	}
	return 0;
}