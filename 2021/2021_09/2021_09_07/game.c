#include "game.h"
//≥ı ºªØ∆Â≈Ã
void InitBoard(char mine[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= rows; i++)
	{
		for (j = 0; j <= cols; j++)
		{
			mine[i][j] = set;
		}
	}
}
// ¥Ú”°∆Â≈Ã
void DisplayBoard(char mine[ROWS][COLS], int row, int col)
{
	printf("-----…®¿◊ ”Œœ∑-----\n");
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", mine[i][j]);
		}
		printf("\n");
	}
}
