#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//自幂数
int main()
{
	int i = 0, j = 0;
	for (i = 0; i < 10000; i++)
	{
		int n = 1;
		int tmp = i;
		while (tmp / 10)  //判断是几位数
		{
			n++;
			tmp /= 10;
		}
		tmp = i;
		int num = 0;
		while (tmp)  //将该数的各位乘n次方相加求和，给num赋值
		{
			num += pow(tmp % 10, n);
			tmp /= 10;
		}
		if (num == i)  //判断是否是自幂数
		{
			printf("%d\n", i);
		}
	}
	return 0;
}