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
	if (((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0)//���귵��1���������귵��0
		return 1;
	else
		return 0;
}

int Check(Date date)
{
	if (date.month >= 1 || date.month <= 12)
	{
		if (date.year >= 1900 && date.year <= 2021)//�������Ƿ����
		{
			if (date.month == 1 || date.month == 3 || date.month == 5 || date.month == 7 || date.month == 8 || date.month == 10 || date.month == 12)//�����������Ƿ����
			{
				if (date.day >= 1 && date.day <= 31)
					return 0;
				else
					return 1;
			}
			if (date.month == 4 || date.month == 6 || date.month == 9 || date.month == 11)//���С�������Ƿ����
			{
				if (date.day >= 1 && date.day <= 30)
					return 0;
				else
					return 1;
			}
			if (date.month == 2)//���2���Ƿ����
			{
				if (CheckLeapYear(date.year))//��������꣬2��29��
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
			printf("������������������");
		scanf("%d%d%d", &date.year, &date.month, &date.day);
		flag = Check(date);
	} while (flag);
	printf("������ȷ");
	return 0;
}