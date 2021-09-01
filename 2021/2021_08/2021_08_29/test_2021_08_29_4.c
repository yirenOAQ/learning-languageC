#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//ÕËºÅ×¢²á³ÌÐò

int main()
{
	char password1[20] = { 0 };
	char password2[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("ÇëÊäÈëÃÜÂë\n");
		scanf("%s", password1);
		printf("ÇëÔÙ´ÎÊäÈëÃÜÂë£¬Á½´ÎÃÜÂëÐèÒ»ÖÂ\n");
		scanf("%s", password2);
		if (strcmp(password1, password2) == 0)
		{
			printf("×¢²á³É¹¦\n");
			break;
		}
		else
		{
			printf("×¢²áÊ§°Ü£¬ÇëÖØÊÔ\n");
		}
	}
	if (i == 3)
	{
		printf("×¢²áÊ§°Ü£¬ÇëÉÔºó³¢ÊÔ\n");
	}
	return 0;
}