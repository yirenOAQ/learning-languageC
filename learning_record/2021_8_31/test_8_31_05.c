#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//�ػ�С����

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ��Խ�����60���ػ�");
	printf("�������:������������ֹͣ�ػ�");
	scanf("%s", &input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
		printf("�˹�����֪֮��");
	}
	else
	{
		goto again;
	}
	return 0;
}