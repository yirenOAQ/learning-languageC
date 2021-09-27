#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	double F = 0;
	scanf("%lf", &F);
	double C = 5 * (F - 32) / 9;
	printf("Celsius=%lf", C);
	return 0;
}