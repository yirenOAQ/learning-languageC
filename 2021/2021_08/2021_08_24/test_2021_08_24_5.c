#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

typedef unsigned int u_int;
int main()
{
	unsigned int num1 = 100; 
	u_int num2 = 200;           //��Ϊ�Ѷ�u_int �ض��壬����u_int����Ч���� unsigned int��ͬ
	printf("%d\n", num1);
	printf("%d\n", num2);
	return 0;
}
