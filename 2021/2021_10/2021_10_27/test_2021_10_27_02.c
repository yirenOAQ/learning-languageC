#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//������
int main()
{
	int i = 0, j = 0;
	for (i = 0; i < 10000; i++)
	{
		int n = 1;
		int tmp = i;
		while (tmp / 10)  //�ж��Ǽ�λ��
		{
			n++;
			tmp /= 10;
		}
		tmp = i;
		int num = 0;
		while (tmp)  //�������ĸ�λ��n�η������ͣ���num��ֵ
		{
			num += pow(tmp % 10, n);
			tmp /= 10;
		}
		if (num == i)  //�ж��Ƿ���������
		{
			printf("%d\n", i);
		}
	}
	return 0;
}