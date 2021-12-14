#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
struct stru
{
	int x;
	char c;
};
void func(struct stru b)
{
	b.x = 20;
	b.c = 'y';
}
int main()
{
	struct stru a = { 10,'x' };
	func(a);
	printf("%d,%c\n", a.x, a.c);//传参不传址，所以不改变
	return 0;
}