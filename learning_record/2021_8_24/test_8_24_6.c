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

//��һ��ѭ����ӡ���(a)Ϊ10��2.��Ϊ��test�У��ֲ�����a������++����ӡ���Զ�����
//�ڶ���ѭ����ӡ���(b)Ϊ234567890 10 11,��Ϊstatic���ι���b�ڳ���Χ�����٣��������ڱ߳�