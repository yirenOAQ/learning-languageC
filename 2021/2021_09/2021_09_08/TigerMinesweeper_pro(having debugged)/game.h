#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//9×9的棋盘，周边多一圈，这样便于进行周围雷数量的判断。周边一圈不进行打印，不设置雷
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
//设定雷的数量
#define NUM 10
//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//布置雷
void SetMine(char board[ROWS][COLS], int row, int col);
//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);