#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//�������µı�������a��b��ֵ
//ȱ�㣺�ɼ��㷶Χ��С�����a = a + b ��������������
int main()
{
	int a = 3;
	int b = 5;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return 0;
}