#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define DAYS_FEB(year) ((((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0) ? 29 : 28)

int main()
{
	int year = 0;
	scanf("%d", &year);
	year = DAYS_FEB(year);
	printf("days of the FEB.: %d\n", year);
	return 0;
}