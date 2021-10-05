#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int sum = a + b;
	int difference = a - b;
	int product = a * b;
	double quotient = 1.0 * a / b;
	double ave = (a + b) / 2.0;
	printf("%d\n", sum);
	printf("%d\n", difference);
	printf("%d\n", product);
	printf("%lf\n", quotient);
	printf("%lf\n", ave);
	int quotient1 = a / b;
	int ave1 = (a + b) / 2;
	printf("%d\n", quotient1);
	printf("%d\n", ave1);
	return 0;
}