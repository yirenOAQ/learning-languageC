#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//ÕËºÅµÇÂ¼³ÌĞòÄ£Äâ

int main()
{
	char password[20] = { 0 };
	printf("ÇëÊäÈëÃÜÂë£º\n");
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%s", password);
		if (strcmp(password, "qwerty123456") == 0)
		{
			printf("µÇÂ¼³É¹¦\n");
			break;
		}
		else
		{
			printf("ÃÜÂë´íÎó£¬ÇëÖØÊÔ\n");
		}
	}
	if (i == 3)
	{
		printf("µÇÂ¼Ê§°Ü");
	}
	return 0;
}

