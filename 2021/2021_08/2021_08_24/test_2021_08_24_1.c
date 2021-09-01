#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//单目操作符
//~：对一个数的二进制按位取反
//++ --前置、后置++，--



int main()
{
	int num1 = 0;           //0000 0000 0000 0000 0000 0000 0000 0000，0的补码
	printf("%d\n", ~num1);  //1111 1111 1111 1111 1111 1111 1111 1111，补码→1111 1111 1111 1111 1111 1111 1111 1110（反码）→1000 0000 0000 0000 0000 0000 0000 0001（原码）
	int num2 = 10;
	int num3 = ++num2;     //先++，后使用，故num2先变成11，再对num3赋值
	printf("%d\n", num3);   //11
	printf("%d\n", num2);   //11
	int num4 = num2--;     //先使用，后--，故先对num4赋值，num2再变成10，
	printf("%d\n", num4);   //11
	printf("%d\n", num2);   //10
	int a = 1;
	int b = (++a) + (++a) + (++a);   //3次++a，故a变成4，所以是3个4相加=12
	printf("%d\n", b);
	return 0;
}

