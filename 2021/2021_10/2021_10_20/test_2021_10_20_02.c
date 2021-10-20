#include <stdio.h>
#include <math.h>
#define NUM 2000
int IsPrime(int numx)
{
	int i = 0;
	for (i = 2; i <= numx; i++)
	{
		if (numx == i)
		{
			return i;
		}
		if (numx % i == 0)
		{
			break;
		}
	}
	return 0;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int count = 0;
	int k = 0;
	for (num1 = 4; num1 <= NUM; num1 += 2)
	{
		for (k = 2; k <= num1/2; k++)
		{
			num2 = k;
			num2 = IsPrime(num2);
			if (num2 != 0)
			{
				num3 = num1 - num2;
				num3 = IsPrime(num3);
				if (num3 != 0)
				{
					printf("%4d=%4d+%4d", num1, num2, num3);
					count++;
					if (count < 4)
						printf(" ");
					if (count == 4)
					{
						printf("\n");
						count = 0;
					}
					break;
				}
			}
		}
	}
	return 0;
}