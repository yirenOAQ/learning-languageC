#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��ӡ����1

int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 2; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
		{ 
			printf("%d\n", i);
			count++;
		}
	}
	printf("�ܹ���%d������\n", count);
	return 0;
}