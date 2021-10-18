#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//判断是否为回文数
int main()
{
	int num, num1, num2 = 0;
	scanf("%d", &num1);
	num = num1;
	do {
		num2 *= 10;
		num2 += num1 % 10;
		num1 /= 10;
	} while (num1 != 0);
	if (num2 == num)
		printf("%d是回文数", num);
	else
		printf("%d不是回文数", num);
	return 0;
}