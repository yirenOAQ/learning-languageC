#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ѡ�����

int main()
{
	int input = 0;           //�����ֵΪinput
	printf("������ڱ��غú�ѧϰ��(1/0)\n");
	scanf("%d\n", &input);
	if (input == 1)
	{
		printf("��offer����");
	}
	else                //�˴�����{}���Բ���
	{
		printf("�ؼ�������");
	}
	return 0;
}







