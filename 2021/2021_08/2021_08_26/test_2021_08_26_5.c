#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int age = scanf(&age);
	if (age < 18)
		printf("δ����\n");
	else if (age >= 18 && age < 30)
		printf("����\n");
	else if (age >= 30 && age < 55)
		printf("����\n");
	else
		printf("����\n");
	return 0;
}