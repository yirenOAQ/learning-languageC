#include "game.h"
//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
// 打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("-----扫雷 游戏-----\n");
	int i = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		int j = 0;
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = NUM;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] != '1')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
//获取周边雷数量
int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	//return (mine[x - 1][y] +
	//	mine[x - 1][y - 1] +
	//	mine[x][y - 1] +
	//	mine[x + 1][y - 1] +
	//	mine[x + 1][y] +
	//	mine[x + 1][y + 1] +
	//	mine[x][y + 1] +
	//	mine[x - 1][y + 1] - 8 * '0');
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] == '1')
			{
				count++;
			}
		}
	}
	return count;
}
//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1输入坐标
	//2检查是否为雷
	//2.1若是雷，GG
	//2.2若不是雷，统计坐标周围有几个雷,存储数据到二维数组show中，游戏继续
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row*col - NUM)
	{
		printf("请输入排查雷的坐标：\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')         //是雷，GG
			{
				printf("你被炸死了，GG\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else                          //不是雷，获取坐标周边的累个数
			{
				int count = GetMineCount(mine, x, y);
				if (show[x][y] == '*')
				{
					win++;
				}
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
			}
		}
		else
		{
			printf("坐标不存在，请重新输入");
		}
	}
	if (win == row * col - NUM)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, ROW, COL);
	}
}