#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��Ŀ������
//~����һ�����Ķ����ư�λȡ��
//++ --ǰ�á�����++��--



int main()
{
	int num1 = 0;           //0000 0000 0000 0000 0000 0000 0000 0000��0�Ĳ���
	printf("%d\n", ~num1);  //1111 1111 1111 1111 1111 1111 1111 1111�������1111 1111 1111 1111 1111 1111 1111 1110�����룩��1000 0000 0000 0000 0000 0000 0000 0001��ԭ�룩
	int num2 = 10;
	int num3 = ++num2;     //��++����ʹ�ã���num2�ȱ��11���ٶ�num3��ֵ
	printf("%d\n", num3);   //11
	printf("%d\n", num2);   //11
	int num4 = num2--;     //��ʹ�ã���--�����ȶ�num4��ֵ��num2�ٱ��10��
	printf("%d\n", num4);   //11
	printf("%d\n", num2);   //10
	int a = 1;
	int b = (++a) + (++a) + (++a);   //3��++a����a���4��������3��4���=12
	printf("%d\n", b);
	return 0;
}
