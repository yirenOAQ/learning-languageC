#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (5 == i)
			break;          //��whlieѭ���У�break������ֹѭ��
		printf("%d\n", i);
		i++;
	}
	return 0;
}