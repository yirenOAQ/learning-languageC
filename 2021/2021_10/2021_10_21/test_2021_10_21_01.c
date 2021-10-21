#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fun(int a, int b, int r[])
{
	int i = 0;
	int num = 0;
	for (i = a; i <= b; i++)
	{
		if ((i % 77 != 0) && (i % 7 == 0 || i % 11 == 0))
		{
			r[num] = i;
			num++;
		}
	}
	return num;
}
int main()
{
	int arr[1000] = { 0 };
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int k = 0;
	int num = fun(a, b, arr);
	for (k = 0; k < num; k++)
	{
		printf("%d", arr[k]);
		if (k != num - 1)
			printf(" ");
		if (k == num - 1)
			printf("\n");
	}
	return 0;
}