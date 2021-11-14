#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 3
void Input(int array[][COL]){
	int i, j;
	for (i = 0; i < ROW; i++)
		for (j = 0; j < COL; j++)
			scanf("%d", &array[i][j]);
}
void Output(int array[][COL]){
	int i, j;
	printf("矩阵为\n");
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
			printf("%d ", array[i][j]);
		printf("\n");
	}
}
void Transpose(int array1[][COL], int array2[][COL]){
	int i, j;
	for (i = 0; i < COL; i++)
		for (j = 0; j < ROW; j++)
			array2[j][i] = array1[i][j];
	printf("转置");
	Output(array2);
}
void OutputSum(int array1[][COL]){
	int sum = 0, i;
	for (i = 0; i < ROW; i++)
		sum += array1[i][i];
	printf("主对角线元素和为%d\n", sum);
}
int main(){
	int array1[ROW][COL];
	int array2[COL][ROW];
	Input(array1);//读入矩阵
	Output(array1);//输出矩阵
	Transpose(array1, array2);
	OutputSum(array1);
	return 0;
}