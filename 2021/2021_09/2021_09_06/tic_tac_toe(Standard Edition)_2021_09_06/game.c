#include "game.h"
void InitBoard(char board[ROW][COL], int row, int col)  //≥ı ºªØ∆Â≈Ã
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col) //¥Ú”°∆Â≈Ã
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		int j = 0;
		for (j = 0; j < COL; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < COL - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		int k = 0;
		if (i < ROW - 1)
		{
			for (k = 0; k < COL; k++)
			{
				printf("---");
				if (k < COL - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}