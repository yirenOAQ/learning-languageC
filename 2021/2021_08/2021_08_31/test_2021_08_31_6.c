#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//�ػ�С����2

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("��ע�⣬��ĵ��Խ�����60���ػ�\n");
		printf("�������:������������ֹͣ�ػ�\n");
		scanf("%s", &input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			printf("�˹�����֪֮��");
			break;
		}

	}
	return 0;
}