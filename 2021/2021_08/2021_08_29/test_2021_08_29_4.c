#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//�˺�ע�����

int main()
{
	char password1[20] = { 0 };
	char password2[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("����������\n");
		scanf("%s", password1);
		printf("���ٴ��������룬����������һ��\n");
		scanf("%s", password2);
		if (strcmp(password1, password2) == 0)
		{
			printf("ע��ɹ�\n");
			break;
		}
		else
		{
			printf("ע��ʧ�ܣ�������\n");
		}
	}
	if (i == 3)
	{
		printf("ע��ʧ�ܣ����Ժ���\n");
	}
	return 0;
}