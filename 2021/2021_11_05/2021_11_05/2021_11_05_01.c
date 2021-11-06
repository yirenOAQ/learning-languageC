#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void DrawTriangle(int n, char c)
{
	int i = 0, j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i; j++)
			printf(" ");
		for (j = 0; j < 2 * i - 1; j++)
			printf("%c", c);
		printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	DrawTriangle(n,'*');
	return 0;
}