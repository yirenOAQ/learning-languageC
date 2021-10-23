#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	double S = 0;
	int i = 0;
	double flag = 1.0;
	int a = 1;
	int b = 1;
	int c = 0;
	for (i = 1; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;
		S += b * flag / a;
		flag = -flag;
	}
	printf("%lf", S);
	return 0;
}