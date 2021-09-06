#include "game.h"
void menu()
{
	printf("************************\n");
	printf("******** 1.play ********\n");
	printf("******** 2.exit ********\n");
	printf("************************\n");
}

void game()
{
	char board[ROW][COL];  //存储数据，二维数组
	InitBoard(board, ROW, COL); //初始化棋盘
	DisplayBoard(board, ROW, COL); // 打印棋盘
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏\n");
			input -= 2;
			break;
		default:
			printf("输入错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}