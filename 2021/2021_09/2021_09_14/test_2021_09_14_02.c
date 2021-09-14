#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int *p = arr;
	printf("%d\n", arr[2]);
	printf("%d\n", 2[arr]);
	printf("%d\n", p[2]);
	//arr[2] <==> *(arr+2) <==> *(p+2) <==> *(2+p) <==> *(2+arr) <==> 2[arr]
	//arr[2] <==> 2[arr]
	return 0;
}