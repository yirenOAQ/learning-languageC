#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��ϵtest_8_24_8.cһ��

extern int Add(int, int);
int main()
{
	int a = 233;
	int b = 721;
	int sum = Add(a, b);
	printf("sum=%d\n", sum);
	return 0;
}