#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[] = "hello world";
	printf("%d %d\n", sizeof(str), strlen(str));
	//sizeof�ǲ��������������/������ռ�ڴ��С����λ���ֽ�
	//strlen�Ǻ���������\0ǰ���ֵ��ַ�����
	return 0;
}