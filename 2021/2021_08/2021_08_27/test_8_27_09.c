#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char password[20] = { 0 };
	printf("���������룺");
	scanf("%s", password);
	printf("��ȷ������(Y/N)��");
	int tmp = 0; 
	while ((tmp = getchar()) != 'n');   //���������Ķ���ַ�
	{
		;
	}
	//getchar();     //����������\n
	int ch = getchar();
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}
	return 0;
}