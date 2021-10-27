#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void IsPalindromeNum(const int N, long int* M, int* ret)
{
	int num1 = 0, num2 = *M;
	do {
		num1 *= N;
		num1 += num2 % N;
		num2 /= N;
	} while (num2 != 0);
	if (num1 == *M)
		*ret = 1;
	*M += num1;
}
int main()
{
	int  N = 0;
	long int M = 0;
	scanf("%d%ld", &N, &M);
	int i = 0;
	int ret = 0;
	for (i = 0; i < 30; i++)
	{
		IsPalindromeNum(N, &M, &ret);
		if (ret == 1)
		{
			printf("STEP=%d", i);
			goto flag;
		}
	}
	printf("Impossible!");
	flag:
	return 0;
}