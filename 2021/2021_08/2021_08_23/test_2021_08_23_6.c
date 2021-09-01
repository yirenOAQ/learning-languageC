#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//单目操作符：
	
int num1 = 0;
int main()
{
	if (num1 != 0)
	{
		printf("num1≠0");
	}
	else
	{
		printf("num1=0");
	}
	//因为num1并不是!=0，所以输出结果为num1=0
	return 0;
}