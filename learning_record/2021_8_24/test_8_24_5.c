#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

typedef unsigned int u_int;
int main()
{
	unsigned int num1 = 100; 
	u_int num2 = 200;           //因为已对u_int 重定义，所以u_int作用效果和 unsigned int相同
	printf("%d\n", num1);
	printf("%d\n", num2);
	return 0;
}
