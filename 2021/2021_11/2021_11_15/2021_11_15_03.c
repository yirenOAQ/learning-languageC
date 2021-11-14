#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int flag = 0;
	int i = 0;
	for (i = 1; i <= 4; i++)//每个人都是全真话/全假话，所以每一句话判定都为真(1)或假(0)，则两句话的判定表达式结果相同
		if ((((i != 2) == (i == 4))) + (((i != 2) == (i == 3))) + (((i != 1) == (i == 2))) + (i != 4) == 4)
			flag = i;
	switch (flag){
	case 1:
	{
		printf("甲打碎的"); 
		break;
	}
	case 2:
	{
		printf("乙打碎的");
		break;
	}
	case 3:
	{
		printf("丙打碎的");
		break;
	}
	case 4:
		printf("丁打碎的");
	}
	return 0;
}
