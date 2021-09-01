#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 10;
	printf("%p\n", &a);    //%p打印的是地址
	int* pa = &a; 
	*pa = 20;              //解引用操作，*pa就是通过pa里的地址找到a    (*为解引用操作符)
	printf("%d\n", a);     //因为上一步对a的地址重新赋值，所以a现在为20    
	return 0;
}