#define _CRT_SECURE_NO_WARNINGS 1
#include  <stdio.h>
//循环语句

int main()
{
	int line = 0;           //敲代码的行数为line
	while (line < 30000)
	{
		printf("已经努力成果:%d，仍需努力\n",line);
		line++;
	}
	if (line >= 30000);
	{
		printf("好offer到手");
	}
	return 0;
}
