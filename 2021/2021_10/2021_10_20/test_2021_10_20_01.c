#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#define PI 3.14
int main()
{
	double r = 0;
	double h = 0;
	scanf("%lf%lf", &r, &h);
	double area = PI * r * (sqrt(h * h + r * r) + r);
	double Volume = PI * r * r * h / 3;
	printf("radius=%lf, height=%lf, Area of surface=%lf, Volume=%lf\n", r, h, area, Volume);
	return 0;
}