#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//值元素是否存在（若存在，请输出下标）
//素排序，要求在主函数中对各子函数进行调用和测试
void Input(int array[], int n){
	printf("请输入元素值");
	int i = 0;
	for (i = 0; i < n; i++)
		scanf("%d", &array[i]);
}
void Output(int array[], int n){
	int i = 0;
	printf("元素内容为：");
	for (i = 0; i < n; i++)
		printf("%d  ", array[i]);
	printf("\n");
}
void PrintAverage(int array[], int n){
	double ave = 0;
	int i = 0;
	for (i = 0; i < n; i++)
		ave += array[i];
	printf("平均值为%lf\n", ave / n);
}
void PrintMax(int array[], int n){
	int max = array[0];
	int i = 0;
	for (i = 0; i < n; i++)
		if (max < array[i])
			max = array[i];
	printf("最大值为%d\n", max);
}
void PrintMin(int array[], int n){
	int min = array[0];
	int i = 0;
	for (i = 0; i < n; i++)
		if (min > array[i])
			min = array[i];
	printf("最小值为%d\n", min);
}
void PrintIsExistence(int array[], int n){
	printf("请输入元素值");
	int num, i, flag = 1;
	scanf("%d", &num);
	for (i = 0; i < n; i++)
		if (num == array[i])
		{
			printf("存在该元素的值，其元素下标为%d\n", i);
			flag = 0;
			break;
		}
	if (flag)
		printf("该元素不存在\n");
}
void Sequence(int array[], int n){
	int i, j, temp;
	for (i = 0; i < n - 1; i++)
		for (j = n - 1; j > i; j--)
			if (array[j] < array[j - 1])
			{
				temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
			}
}
int main(){
	int array[10], n;
	printf("请输入元素个数\n");
	do {
		scanf("%d", &n);
	} while (n < 1 || n>10);
	Input(array, n);//输入所有元素值
	Output(array, n);//输出所有元素值
	PrintAverage(array, n);//输出平均值
	PrintMax(array, n);//输出最大值
	PrintMin(array, n);//输出最小值
	PrintIsExistence(array, n);//输出是否存在某值
	Sequence(array, n);//给函数排序
	return 0;
}