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
			if (str[i] == 32)//���������ǰ�ݽ�����һλ��Ȼ��0�������ڴ�λ�ý���һ��ѭ������i--���ó������һ��ѭ������һ��
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