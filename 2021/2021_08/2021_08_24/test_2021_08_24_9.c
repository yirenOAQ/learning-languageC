#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define ADD(x,y) x+y
#define Add(x,y) ((x)+(y))

int main()
{
	printf("%d\n", ADD(2, 3));   //���Ϊ5
	printf("%d\n", 4*ADD(2, 3)); //���Ϊ11 ԭ�򣺺�����ʱΪ�滻������4*2+3=11
	printf("%d\n", 4*Add(2, 3));   //���Ϊ20
	return 0;
}