#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//�˺ŵ�¼����ģ��

int main()
{
	char password[20] = { 0 };
	printf("���������룺\n");
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%s", password);
		if (strcmp(password, "qwerty123456") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������������\n");
		}
	}
	if (i == 3)
	{
		printf("��¼ʧ��");
	}
	return 0;
}

