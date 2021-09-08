#include "game.h"
//��ʼ������
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
// ��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("-----ɨ�� ��Ϸ-----\n");
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
//������
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
//��ȡ�ܱ�������
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
//�Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1��������
	//2����Ƿ�Ϊ��
	//2.1�����ף�GG
	//2.2�������ף�ͳ��������Χ�м�����,�洢���ݵ���ά����show�У���Ϸ����
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row*col - NUM)
	{
		printf("�������Ų��׵����꣺\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')         //���ף�GG
			{
				printf("�㱻ը���ˣ�GG\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else                          //�����ף���ȡ�����ܱߵ��۸���
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
			printf("���겻���ڣ�����������");
		}
	}
	if (win == row * col - NUM)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(mine, ROW, COL);
	}
}