#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//�������µı���������a��b��ֵ
//^����������û�н�λ���������
int main()
{
	int a = 3;
	int b = 5;
	printf("a = %d  b = %d \n", a, b);
	a = a ^ b;
	b = a ^ b;     //���㷨�ײ��߼�������һ���У�b = a^b^b=a^0=a
	a = a ^ b;
	printf("a = %d  b = %d \n", a, b);
	return 0;
}