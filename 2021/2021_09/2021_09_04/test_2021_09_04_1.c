#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//����1~100�г���9������
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
			printf("%d ", i);
		}
		if (i / 10 == 9)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n%d", count);
	return 0;
}