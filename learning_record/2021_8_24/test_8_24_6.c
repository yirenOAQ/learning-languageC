#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void test1()
{
	int a = 1;
	a++;
	printf("%d\n", a);
}
void test2()
{
	static b = 1;
	b++;
	printf("%d\n", b);
}
int main()
{
	int i = 0;
	while (i < 10)
	{
		test1();
		i++;
	}
	int ii = 0;
	while (ii < 10)
	{
		test2();
		ii++;
	}
	return 0;
}

//第一个循环打印结果(a)为10个2.因为在test中，局部变量a创建，++，打印后，自动销毁
//第二个循环打印结果(b)为234567890 10 11,因为static修饰过后，b在出范围后不销毁，生命周期边长