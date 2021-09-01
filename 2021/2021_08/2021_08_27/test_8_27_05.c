#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (5 == i)
			break;          //在whlie循环中，break永久终止循环
		printf("%d\n", i);
		i++;
	}
	return 0;
}