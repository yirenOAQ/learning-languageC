#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)     //尽量左开右闭，写成< 10而不是<= 9     例如这里10正好代表打印10次
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}