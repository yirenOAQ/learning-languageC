#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//选择语句

int main()
{
	int input = 0;           //输入的值为input
	printf("你打算在比特好好学习吗？(1/0)\n");
	scanf("%d\n", &input);
	if (input == 1)
	{
		printf("好offer到手");
	}
	else                //此处两个{}可以不加
	{
		printf("回家卖红薯");
	}
	return 0;
}







