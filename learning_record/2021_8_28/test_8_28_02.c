#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
		{
			//break;      //break��ӡ��4��ֹͣ
			continue;     //continue��ӡʱ����5
		}
		printf("%d\n", i);
	}
	return 0;
}