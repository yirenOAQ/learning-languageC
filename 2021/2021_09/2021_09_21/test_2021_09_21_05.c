#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//�ж��������Ķ�����λ�Ĳ�ͬλ �Ż��汾
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
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int ret = m ^ n;
	int count = NumberOf(ret);
	printf("���߶�����λ�Ĳ�ͬλ����Ϊ%d", count);
	return 0;
}
