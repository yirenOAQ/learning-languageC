#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����1000~2000������

int main()
{
	int i = 0;
	int num = 0;
	for (i = 1000; i <= 2000; i += 4)
	{
		if (((i % 4 == 0) && (i % 100 != 0)) || i % 400 == 0)
		{
			printf("%d\n", i);
			num++;
		}
	}
	printf("�ܹ���%d\n������", num);
	return 0;
}