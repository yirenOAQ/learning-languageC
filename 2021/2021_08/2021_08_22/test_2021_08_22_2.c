#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ת���ַ� 
int main()
{
	printf("%d\n", 100);
	printf("%s\n", "'");
	printf("%s\n", "\"");  
	/*printf("%s\n", """);     ע��˴���������ִ����ᱨ�������Ľ��жԱȣ�������*/
	printf("%s\n", "???");
	printf("d:\real_learning\network\\test_8_22_2.c\n");
	printf("d:\\real_learning\\network\\test_8_22_2.c\n");      /*ע��Ƚ϶�������ת���ַ���Ч��*/
	printf("\a\n");
	printf("\\a\n");        /*ע��ǰ��Ϊ������ʾ��������Ϊa*/
	printf("%c\n",'\130');
	printf("%c\n",'\x30');
	printf("%c\n", '\3');
	printf("%d\n", strlen("d:\real_learning\network\\test_8_22_2.c\n"));     /*37*/
	printf("%d\n", strlen("d:\\real_learning\\network\\test_8_22_2.c\n"));   /*39*/           /*һ��ת���ַ���������һ���ַ�����*/
	return 0;
}