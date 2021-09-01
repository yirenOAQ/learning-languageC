#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//打印1到100的奇数

int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)     //或者7和8两行改成  for (int i = 1; i <= 100; i++)   ，也行，但在C++和C99才支持
	{
		if (1 == i % 2)
			printf("%d ", i);
	}
	return 0;
}