#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (5 == i)
			continue;          //��whileѭ���У�continue����������������ѭ���У�continue��ߵĴ��룬ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��
		printf("%d\n", i);
		i++;
	}
	return 0;
}