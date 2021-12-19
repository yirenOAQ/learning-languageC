#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Date
{
	int year;
	int month;
	int day;
};
typedef struct Date Date;
int CheckLeapYear(int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0)//闰年返回1，不是闰年返回0
		return 1;
	else
		return 0;
}

int Check(Date date)
{
	if (date.month >= 1 || date.month <= 12)
	{
		if (date.year >= 1900 && date.year <= 2021)//检查年份是否符合
		{
			if (date.month == 1 || date.month == 3 || date.month == 5 || date.month == 7 || date.month == 8 || date.month == 10 || date.month == 12)//检查大月天数是否符合
			{
				if (date.day >= 1 && date.day <= 31)
					return 0;
				else
					return 1;
			}
			if (date.month == 4 || date.month == 6 || date.month == 9 || date.month == 11)//检查小月天数是否符合
			{
				if (date.day >= 1 && date.day <= 30)
					return 0;
				else
					return 1;
			}
			if (date.month == 2)//检查2月是否符合
			{
				if (CheckLeapYear(date.year))//如果是闰年，2月29天
				{
					if (date.day >= 1 && date.day <= 29)
						return 0;
					else
						return 1;
				}
				else
				{
					if (date.day >= 1 && date.day <= 28)
						return 0;
					else
						return 1;
				}
			}

			else
				return 1;
		}
	}
	else
		return 1;
}
int main()
{
	int flag = 0;
	Date date;
	do
	{
		if (flag)
			printf("日期有误，请重新输入");
		scanf("%d%d%d", &date.year, &date.month, &date.day);
		flag = Check(date);
	} while (flag);
	printf("日期正确");
	return 0;
}