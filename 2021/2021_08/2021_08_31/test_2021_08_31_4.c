#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//��ӡ����3(2���Ż�)

int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 2; i <= 200; i++)
	{
		int flag = 1;
		for (j = 2; j <= sqrt(i); j++)    //16=4*4=2*8�����������j<=i��ƽ����ʱ���Ϳ���ȷ����������
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d\n", i);
			count++;
		}
	}
	printf("�ܹ���%d������\n", count);
	return 0;
}