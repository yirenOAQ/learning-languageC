#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//��һ�������洢���ڴ��еĶ�������1�ĸ���
//�Ż��汾
int NumberOf(int n)
{
	int count = 0;
	while (n);
	{
		n = n & (n - 1);
		count++;
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
