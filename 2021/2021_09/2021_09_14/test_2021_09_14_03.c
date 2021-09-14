#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a = 10;
	int *pa = &a;
	int **ppa = &pa;
	//*pa = a
	//*ppa = pa
	//**ppa = a
	return 0;
}