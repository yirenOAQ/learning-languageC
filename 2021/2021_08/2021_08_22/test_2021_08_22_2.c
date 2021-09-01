#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//转义字符 
int main()
{
	printf("%d\n", 100);
	printf("%s\n", "'");
	printf("%s\n", "\"");  
	/*printf("%s\n", """);     注意此处，若进行执行则会报错，与上文进行对比，理解感悟*/
	printf("%s\n", "???");
	printf("d:\real_learning\network\\test_8_22_2.c\n");
	printf("d:\\real_learning\\network\\test_8_22_2.c\n");      /*注意比较二者区别，转义字符的效果*/
	printf("\a\n");
	printf("\\a\n");        /*注意前者为报错提示音，后者为a*/
	printf("%c\n",'\130');
	printf("%c\n",'\x30');
	printf("%c\n", '\3');
	printf("%d\n", strlen("d:\real_learning\network\\test_8_22_2.c\n"));     /*37*/
	printf("%d\n", strlen("d:\\real_learning\\network\\test_8_22_2.c\n"));   /*39*/           /*一个转义字符整体算作一个字符长度*/
	return 0;
}