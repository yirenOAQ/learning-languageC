#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//9��9�����̣��ܱ߶�һȦ���������ڽ�����Χ���������жϡ��ܱ�һȦ�����д�ӡ����������
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
//��ʼ������
void InitBoard(char mine[ROWS][COLS], int rows, int cols,char set);
// ��ӡ����
void DisplayBoard(char mine[ROWS][COLS], int row, int col);
