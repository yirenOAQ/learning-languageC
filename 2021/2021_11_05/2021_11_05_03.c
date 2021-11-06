#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int GCD(int a, int b)
{
	if (!(a % b))
		return b;
	else
		return GCD(b, a % b);
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int c = GCD(a, b);
	printf("最大公约数是%d", c);
	return 0;
}
