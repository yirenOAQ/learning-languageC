#include <stdio.h>
//作用域和生命周期

int a = 888;


int main()
{
	{
		int b = 123;

	}
	printf("%d\n",a);
	/*printf("%d\n", b);       此处的b生命周期结束，所以b为未定义状态，故代码报错*/
	return 0;
}

