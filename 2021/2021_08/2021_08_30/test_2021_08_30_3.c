#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�������������Լ��(1)

int Max(int x,int y)
{
	int z = 0;
	if (x > y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	return z;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int i = 0;
	int z = Max(a, b);
	for (i = z;; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("���Լ����%d", i);
			break;
		}
	}
	return 0;
}
