#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����


int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	char ch[5] = { 'a','b','c'};
	int i = 0;
	while (i <= 5)
	{
		printf("%d\n", arr[i]);     //��ӡarr���±�Ϊ0,1,2,3,4,5���������ӡ���Ϊ1,2,3,4,5,6
		i++;
	}
	return 0;
}