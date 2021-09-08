#include "game.h"
//打印游戏菜单
void menu()
{
	printf("********扫雷游戏*********\n");
	printf("******** 1.play ********\n");
	printf("******** 2.exit ********\n");
	printf("************************\n");
}
//游戏程序
void game()
{
	char mine[ROWS][COLS] = { 0 };    //创建雷的位置的 数组
	char show[ROWS][COLS] = { 0 };    //创建展示给玩家的页面 的数组
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	
	//布置雷
	SetMine(mine, ROW, COL);
	//打印棋盘
	DisplayBoard(show, ROW, COL);
	//排查雷
	FindMine(mine, show, ROW, COL);
}
//主函数
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
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