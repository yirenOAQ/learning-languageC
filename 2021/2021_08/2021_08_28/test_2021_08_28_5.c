#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//¼ÆËãnµÄ½×³Ë

int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	int num = 1;
	for (i = 1; i <= n; i++)
	{
		num *= i;
	}
	printf("%d", num);
	return 0;
}