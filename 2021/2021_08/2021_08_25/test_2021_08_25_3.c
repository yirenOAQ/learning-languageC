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
	struct Stu stu1 = { "����",20,98.5 };       //�ṹ��Ĵ����ͳ�ʼ��
	printf("��һ�δ�ӡ��������%s������%d���÷�%.1lf\n", stu1.name, stu1.age, stu1.score);    //�ṹ�����.��Ա���� 
	struct Stu*ps = &stu1;
	printf("�ڶ��δ�ӡ��������%s������%d���÷�%.2lf\n", (*ps).name, (*ps).age, (*ps).score);
	printf("�����δ�ӡ��������%s������%d���÷�%lf\n", ps->name, ps->age, ps->score);
	printf("�����δ�ӡ��������%s������%d���÷�%.8f\n", ps->name, ps->age, ps->score);
	return 0;
}