#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//�ж��������Ķ�����λ�Ĳ�ͬλ
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((m >> 1) & 1) != ((n >> 1) & 1));
		{
			count++;
		}
	}
	printf("���߶�����λ�Ĳ�ͬλ����Ϊ%d", count);
	return 0;
}
