#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;        //因为a = 0，所以后面不进行运算就终止了，故b = 2, d = 4
	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
	printf("\n");
	a = 0, b = 2, c = 3, d = 4;
	i = a++ || ++b || d++;         //因为 ++b = 3,所以后面的不进行运算就终止，故 a = 1,d = 4
	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
	return 0;
}