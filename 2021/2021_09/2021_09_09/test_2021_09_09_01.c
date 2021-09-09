#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a = 6 / 5;
	float b = 6 / 5;
	float c = 6.0 / 5;
	printf("%d\n", a);
	printf("%f\n", b);
	printf("%f\n", c);
	printf("%0.1f\n", c);
	printf("%0.2f\n", c);
	int d = 6 % 5;
	printf("%d\n", d);

	return 0;
}