#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (5 == i)
			continue;          //在while循环中，continue的作用是跳过本次循环中，continue后边的代码，直接去判断部分，看是否进行下一次循环
		printf("%d\n", i);
		i++;
	}
	return 0;
}