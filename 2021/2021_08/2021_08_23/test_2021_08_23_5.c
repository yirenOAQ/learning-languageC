#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��������
//������������+ - * / %
//λ�Ʋ�������<< >>��������λ��
//λ��������& | ^
//��ֵ��������= += -= *= /= &= |= ^= <<= >>=

int main()
{
	int num1 = 9 / 2;
	float num2 = 9 / 2;
	float num3 = 9.0 / 2;
	int num4 = 9 % 2;
	int num5 = 2 << 2;
	int num6 = 10 >> 1;
	printf("%d\n", num1);   //���Ϊ4
	printf("%f\n", num2);   //���Ϊ4.000000
	printf("%f\n", num3);   //���Ϊ4.500000
	printf("%d\n", num4);   //���Ϊ1
	printf("%d\n", num5);   //���Ϊ8
	printf("%d\n", num6);   //���Ϊ5
	return 0;
}