#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;        //��Ϊa = 0�����Ժ��治�����������ֹ�ˣ���b = 2, d = 4
	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
	printf("\n");
	a = 0, b = 2, c = 3, d = 4;
	i = a++ || ++b || d++;         //��Ϊ ++b = 3,���Ժ���Ĳ������������ֹ���� a = 1,d = 4
	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
	return 0;
}