#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct Stu
{
	char name[20];
	int age;
	double score;
}; 

struct Book
{
	char name[20];
	char id[20];
	float price;
};


int main()
{
	struct Stu stu1 = { "张三",20,98.5 };       //结构体的创建和初始化
	printf("第一次打印：姓名：%s，年龄%d，得分%.1lf\n", stu1.name, stu1.age, stu1.score);    //结构体变量.成员变量 
	struct Stu*ps = &stu1;
	printf("第二次打印：姓名：%s，年龄%d，得分%.2lf\n", (*ps).name, (*ps).age, (*ps).score);
	printf("第三次打印：姓名：%s，年龄%d，得分%lf\n", ps->name, ps->age, ps->score);
	printf("第三次打印：姓名：%s，年龄%d，得分%.8f\n", ps->name, ps->age, ps->score);
	return 0;
}