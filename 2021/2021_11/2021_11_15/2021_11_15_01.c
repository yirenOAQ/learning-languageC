#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ֵԪ���Ƿ���ڣ������ڣ�������±꣩
//������Ҫ�����������жԸ��Ӻ������е��úͲ���
void Input(int array[], int n){
	printf("������Ԫ��ֵ");
	int i = 0;
	for (i = 0; i < n; i++)
		scanf("%d", &array[i]);
}
void Output(int array[], int n){
	int i = 0;
	printf("Ԫ������Ϊ��");
	for (i = 0; i < n; i++)
		printf("%d  ", array[i]);
	printf("\n");
}
void PrintAverage(int array[], int n){
	double ave = 0;
	int i = 0;
	for (i = 0; i < n; i++)
		ave += array[i];
	printf("ƽ��ֵΪ%lf\n", ave / n);
}
void PrintMax(int array[], int n){
	int max = array[0];
	int i = 0;
	for (i = 0; i < n; i++)
		if (max < array[i])
			max = array[i];
	printf("���ֵΪ%d\n", max);
}
void PrintMin(int array[], int n){
	int min = array[0];
	int i = 0;
	for (i = 0; i < n; i++)
		if (min > array[i])
			min = array[i];
	printf("��СֵΪ%d\n", min);
}
void PrintIsExistence(int array[], int n){
	printf("������Ԫ��ֵ");
	int num, i, flag = 1;
	scanf("%d", &num);
	for (i = 0; i < n; i++)
		if (num == array[i])
		{
			printf("���ڸ�Ԫ�ص�ֵ����Ԫ���±�Ϊ%d\n", i);
			flag = 0;
			break;
		}
	if (flag)
		printf("��Ԫ�ز�����\n");
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
	printf("������Ԫ�ظ���\n");
	do {
		scanf("%d", &n);
	} while (n < 1 || n>10);
	Input(array, n);//��������Ԫ��ֵ
	Output(array, n);//�������Ԫ��ֵ
	PrintAverage(array, n);//���ƽ��ֵ
	PrintMax(array, n);//������ֵ
	PrintMin(array, n);//�����Сֵ
	PrintIsExistence(array, n);//����Ƿ����ĳֵ
	Sequence(array, n);//����������
	return 0;
}