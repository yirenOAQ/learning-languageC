#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�������������Լ��(2)

int Max(int x, int y)
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
	int max = Max(a, b);
	while (1)
	{
		if (a % max == 0 && b % max == 0)
		{
			printf("���Լ����%d", max);
			break;
		}
		max--;
	}
	return 0;
}