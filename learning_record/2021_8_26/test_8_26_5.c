#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int age = scanf(&age);
	if (age < 18)
		printf("未成年\n");
	else if (age >= 18 && age < 30)
		printf("青年\n");
	else if (age >= 30 && age < 55)
		printf("中年\n");
	else
		printf("老年\n");
	return 0;
}