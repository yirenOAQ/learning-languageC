#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define ADD(x,y) x+y
#define Add(x,y) ((x)+(y))

int main()
{
	printf("%d\n", ADD(2, 3));   //结果为5
	printf("%d\n", 4*ADD(2, 3)); //结果为11 原因：宏运用时为替换，所以4*2+3=11
	printf("%d\n", 4*Add(2, 3));   //结果为20
	return 0;
}