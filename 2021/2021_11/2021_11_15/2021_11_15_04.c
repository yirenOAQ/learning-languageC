#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char ch[100];
	gets(ch);
	int n = strlen(ch), i;
	for (i = 0; i < n; i++)
		if (ch[i] > '0' && ch[i] < '9')
			printf("%c", ch[i]);
	return 0;
}