#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//代码风格

int main()
{
	int num = 3;
	if (5 == num);                //注意这里，在进行整形比较时，把常量放在左边
		printf("num=%d\n", num);  //避免写错代码写成num=5,导致对num赋值产生错误
	return 0;
}
