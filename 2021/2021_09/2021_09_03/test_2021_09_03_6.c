#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//쳲���������2(����˼·��Ч�ʸ�)
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	printf("����֪���ڼ�������ֵ�أ�");
	scanf("%d", &n);
	int num = Fib(n);
	printf("�������%d\n", num);
	return 0;
}