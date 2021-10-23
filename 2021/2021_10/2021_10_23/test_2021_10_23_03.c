#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	int a = 0;
	int b = 0;
	do{
		scanf("%d%d", &a, &b);
	} while (a < 10 || b < 10 || a > 1000 || b >1000);
	int flag = 1;
	int count = 0;
	int i = 0;
	int j = 0;
	for (i = a; i <= b; i++)
	{
		for (j = 2; j <= sqrt(i); j++)
			if (i % j == 0)
				flag = 0;
		if (flag)
		{
			printf("%d ", i);
			count++;
		}
		else
		{
			flag = 1;
		}
		if (count == 5)
		{
			printf("\n");
			count = 0;
		}
	}
	return 0;
}