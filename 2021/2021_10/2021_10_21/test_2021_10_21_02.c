#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0, j = 0;
	int arr[10] = { 0 };
	int sum = 0;
	int num = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &num);
		arr[i] = num;
	}
	int max = arr[0];
	int min = arr[0];
	int count = 0;
	for (i = 0; i < 10; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	for (i = 0; i < 10; i++)
	{
		if (arr[i] != max && arr[i] != min)
		{
			sum += arr[i];
			count++;
		}
	}
	double ave = sum * 1.0 / count;
	printf("%lf\n", ave);
	return 0;
}