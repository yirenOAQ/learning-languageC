#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//쳲���������1(������Ч�ʣ��ڴ�ռ�õ�����)
int Fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}
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