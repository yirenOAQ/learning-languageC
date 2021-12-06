#include <stdio.h>
#include <string.h>
char* Deleteblank(char *str)
{
	int i, j;
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] != 32)
			continue;
		else
		{
			for (j = i; j < strlen(str); j++)
			{
				str[j] = str[j + 1];
			}
			if (str[i] == 32)//如果依次往前递进后，这一位仍然是0，那再在此位置进行一次循环，故i--来让程序外层一级循环多走一次
				i--;
		}
	}
	return str;
}
int main()
{
	char str[100];
	gets(str);
	*str = *Deleteblank(str);
	puts(str);
	return 0;
}