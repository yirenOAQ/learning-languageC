#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//��һ�������洢���ڴ��еĶ�������1�ĸ���
int main()
{
	int a = 0;
	scanf("%d", &a);
	int count = 0;
	int b = 1;
	while (a / b != 0)
	{
		if ((a & b) == b)
		{
			count++;
		}
		b = b << 1;
	}
	printf("��������1�ĸ���Ϊ%d", count);
	return 0;
}