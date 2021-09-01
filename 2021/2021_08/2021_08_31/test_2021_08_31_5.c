#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//关机小程序

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑将会在60秒后关机");
	printf("如果输入:‘我是猪’，则停止关机");
	scanf("%s", &input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
		printf("人贵有自知之明");
	}
	else
	{
		goto again;
	}
	return 0;
}