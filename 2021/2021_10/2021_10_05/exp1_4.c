#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define PI 3.14
int main()
{
	double radius = 0;
	double height = 0;
	scanf("%lf%lf", &radius, &height);
	double area = 2 * PI * radius * (radius + height);
	double cost = area * 10;
	printf("�����%0.2fƽ������\n", area);
	printf("����%0.2fԪ\n", cost);
	return 0;
}