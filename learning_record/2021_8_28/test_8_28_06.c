#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����1~n�Ľ׳˵ĺ�

int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	int num = 1;
	int sum = 0;
	for (i = 1; i <= n; i++)
	{
		num *= i;
		sum += num;
	}
	printf("%d", sum);
	return 0;
}
