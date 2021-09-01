#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//打印质数3(2的优化)

int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 2; i <= 200; i++)
	{
		int flag = 1;
		for (j = 2; j <= sqrt(i); j++)    //16=4*4=2*8，所以如果在j<=i的平方根时，就可以确定有无因数
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
	printf("总共有%d个素数\n", count);
	return 0;
}