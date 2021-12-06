#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
void Sortnum(char* str, char* secret)
{
	int i, j = 0;
	for (i = 0; i < strlen(str); i++)
		if (str[i] >= '0' && str[i] <= '9')
		{
			secret[j] = str[i];
			j++;
		}
}
void Sortletter(char* str, char* user)
{
	int i, j = 0;
	for (i = 0; i < strlen(str); i++)
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			user[j] = str[i];
			j++;
		}
}
int main()
{
	char str1[100], str2[100], user[100] = "0", secret[100] = "0";
	printf("生成账号:");
	gets(str1);
	printf("生成密码:");
	gets(str2);
	Sortletter(str1,user);
	Sortnum(str2,secret);
	int i = 0;
	printf("用户名为:\n");
	for (i = 0; i < strlen(user); i += 2)
		printf("%c", user[i]);
	printf("\n");
	printf("密码为:\n");
	for(i = 1; i < strlen(secret); i += 2)
		printf("%c", secret[i]);
	return 0;
}