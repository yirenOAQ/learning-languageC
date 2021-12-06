#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void reverse(int* arr, int size)
{
	int t, * p = &arr[size - 1];
	while (arr < p)
	{
		t = *arr;
		*arr = *p;
		*p = t;
		arr++;
		p--;
	}
}
int main()
{
	int a[6] = { 1,3,4,5,6,7 };
	int size = sizeof(a) / sizeof(a[0]);
	reverse(a, size);
	int i = 0;
	for (i = 0; i < size; i++)
		printf("%d ", a[i]);
	return 0;
}