#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
		{
			//break;      //break打印到4就停止
			continue;     //continue打印时跳过5
		}
		printf("%d\n", i);
	}
	return 0;
}