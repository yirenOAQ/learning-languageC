#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//ͬʱ����1~n�ĺͣ������׳ˣ����׳�֮��
int main()
{
	int n = 0;
	scanf("%d", &n);
	int sum = 0;
	int num = 0;
	int ret = 1;
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		sum += i;
		int j = 0;
		for (j = 0; j < i; j++);
		{
			ret *= i;
			num += ret;
		}
	}
	printf("�ͣ�%d\n��(�׳�)��%d\n�׳�֮��Ϊ%d", sum, ret,num);
	return 0;
}