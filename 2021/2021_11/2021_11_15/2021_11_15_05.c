#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	long int num = 0;
	int a[100];
	int i = 0;
	int m = 0;
	int remainder;
	char hex[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
	scanf("%ld", &num);
	while (num > 0)
	{
		remainder = num % 16;
		a[i++] = remainder;
		num /= 16;
	}
	for (i -= 1; i >= 0; i--)
	{
		m = a[i];
		printf("%c", hex[m]);
	}
}
