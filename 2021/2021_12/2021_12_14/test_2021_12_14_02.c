#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
struct 
{ 
	int m, n; 
} arr[2] = { { 11, 22 }, { 33, 44 } }, * ptr = arr;
int main()
{
	printf("%d\n", ++ptr->m);
	printf("%d\n", (++ptr)->m);//����ע�͵�һ����ִ�У������
	return 0;
}