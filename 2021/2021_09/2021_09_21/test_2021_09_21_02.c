#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//��һ�������洢���ڴ��еĶ�������1�ĸ���
//�Ż��汾
int NumberOf(int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if ((n & 1) == 1)
		{
			count++;
		}
		n = n >> 1;
	}
	return count;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int num = NumberOf(n);
	printf("��������1�ĸ���Ϊ%d", num);
	return 0;
}
