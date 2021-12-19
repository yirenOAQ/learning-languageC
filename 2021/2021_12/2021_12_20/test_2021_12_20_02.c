#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void writefile(int ch, FILE* fp)        
{
	ch = getchar();
	while (ch != '#')
	{
		fputc(ch, fp);
		ch = getchar();
	}
}
void readfile(int ch, FILE* fp)         
{
	while ((ch = fgetc(fp)) != EOF)
	{
		putchar(ch);
	}
	putchar('\n');
}
int main()
{
	FILE* fp; 
	fp = fopen("D:\\f1.txt", "w+");
	char ch = 0;
	if (fp == 0)                     
	{
		printf("file error\n");
		exit(1);
	}
	writefile(ch, fp);
	rewind(fp);
	readfile(ch, fp);
	fclose(fp);
	return 0;
}