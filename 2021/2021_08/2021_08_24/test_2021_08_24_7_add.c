#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//extern�����ⲿ���ţ���ϵtest_8_24.c��
extern int num1;
extern int num2;

int main()
{
	printf("%d\n", num1);
	//printf("%d\n", num2);        //�˴�ִ�лᱨ����Ϊstatic���ι���ȫ�ֱ���int num2ֻ���������ڵ�Դ�ļ�ʹ��
	return 0;
}