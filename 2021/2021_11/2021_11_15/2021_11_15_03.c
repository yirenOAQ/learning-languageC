#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int flag = 0;
	int i = 0;
	for (i = 1; i <= 4; i++)//ÿ���˶���ȫ�滰/ȫ�ٻ�������ÿһ�仰�ж���Ϊ��(1)���(0)�������仰���ж����ʽ�����ͬ
		if ((((i != 2) == (i == 4))) + (((i != 2) == (i == 3))) + (((i != 1) == (i == 2))) + (i != 4) == 4)
			flag = i;
	switch (flag){
	case 1:
	{
		printf("�״����"); 
		break;
	}
	case 2:
	{
		printf("�Ҵ����");
		break;
	}
	case 3:
	{
		printf("�������");
		break;
	}
	case 4:
		printf("�������");
	}
	return 0;
}
