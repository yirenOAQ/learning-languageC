#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 10;
	printf("%p\n", &a);    //%p��ӡ���ǵ�ַ
	int* pa = &a; 
	*pa = 20;              //�����ò�����*pa����ͨ��pa��ĵ�ַ�ҵ�a    (*Ϊ�����ò�����)
	printf("%d\n", a);     //��Ϊ��һ����a�ĵ�ַ���¸�ֵ������a����Ϊ20    
	return 0;
}