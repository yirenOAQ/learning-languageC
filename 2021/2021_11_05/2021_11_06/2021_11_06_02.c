#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void sort(int* arr, int n)
{
	int i = 0, j = 0;
	for (j = 0; j < n - 1; j++) 
	{
		for (i = 0; i < n - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				arr[i] = arr[i] ^ arr[i + 1];
				arr[i + 1] = arr[i] ^ arr[i + 1];
				arr[i] = arr[i] ^ arr[i + 1];
			}
		}
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[10] = { 0 };
	int num = 0;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num);
		arr[i] = num;
	}
	sort(arr, n);
	for (i = 0; i < n; i++)
		printf("%d  ", arr[i]);
	printf("\n");
	return 0;
}