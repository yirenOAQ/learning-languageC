#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//��������Ϸ��1~100��

void menu()
{
	printf("******************\n");
	printf("***** 1.play *****\n");
	printf("***** 2.exit *****\n");
	printf("******************\n");
	printf("  ���������ѡ��  \n");
}

void game()
{
	int num = rand() % 100 + 1;     //%100��������0~99����+1�ͱ��1~100
	int guess = 0;
	int i = 0;
	printf("���������Ĳ²�\n");
	for (i = 1;; i++)
	{
		scanf("%d", &guess);
		if (guess > num)
		{
			printf("��´���\n");
		}
		else if (guess < num)
		{
			printf("���С��\n");
		}
		else
		{
			printf("��¶���\n");
			break;
		}
	}
	printf("���ܹ�����%d��\n", i);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
		case 2:
			printf("�˳���Ϸ\n");
			input-=2;
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}