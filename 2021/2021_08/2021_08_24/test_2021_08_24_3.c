#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��������������Ŀ��������

int main()
{
	int a = 0;
	int b = 3;
	int max = 0;
	//if (a > b)             //��if else���б��
	//{
	//	max = a;
	//}
	//else
	//{
	//	max = b;
	//}
	//printf("%d\n", max);
	max = a > b ? a : b;
	printf("%d\n", max);     //��Ŀ�������ķ���
	return 0;
}

