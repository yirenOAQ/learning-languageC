#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��ӡ1��100������

int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)     //����7��8���иĳ�  for (int i = 1; i <= 100; i++)   ��Ҳ�У�����C++��C99��֧��
	{
		if (1 == i % 2)
			printf("%d ", i);
	}
	return 0;
}