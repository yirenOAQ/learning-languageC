#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//猜数字游戏（1~100）

void menu()
{
	printf("******************\n");
	printf("***** 1.play *****\n");
	printf("***** 2.exit *****\n");
	printf("******************\n");
	printf("  请输入你的选择  \n");
}

void game()
{
	int num = rand() % 100 + 1;     //%100的余数是0~99，再+1就变成1~100
	int guess = 0;
	int i = 0;
	printf("请输入您的猜测\n");
	for (i = 1;; i++)
	{
		scanf("%d", &guess);
		if (guess > num)
		{
			printf("你猜大了\n");
		}
		else if (guess < num)
		{
			printf("你猜小了\n");
		}
		else
		{
			printf("你猜对了\n");
			break;
		}
	}
	printf("你总共猜了%d次\n", i);
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
			printf("退出游戏\n");
			input-=2;
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}