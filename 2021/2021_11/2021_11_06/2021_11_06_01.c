#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int m = 0;
	scanf("%d", &m);
	int i = 0;
	int num = 0;
	int arr1[10] = { 0 };
	for (i = 0; i < 10; i++)
		arr1[i] = arr[i];
	for (i = 0; i < 10 - m; i++)
		arr[i + m] = arr1[i];
	for (i = 0; i < m; i++)
		arr[i] = arr1[10 - m + i];
	for (i = 0; i < 10; i++)
		printf("%3d", arr[i]);
	printf("\n");
	return 0;
}