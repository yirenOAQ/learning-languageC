#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int add(int x, int y)          //����һ������
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	/*int sum = num1 + num2; */  //�˷������Ǻ����ķ���
	int sum = add(num1, num2);    //�ú����ķ����������,�����ȶԺ�������һ������
	printf("%d", sum);
	return 0;
}