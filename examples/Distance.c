#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float x = 0;
	double x1=0;
	double y1;
	double x2;
	double y2;
	printf("%s","Input x1:");
	scanf("%lf", &x1);
	printf("Input y1:");
	scanf("%lf", &y1);
	printf("Input x2:");
	scanf("%lf", &x2);
	printf("Input y2:");
	scanf("%lf", &y2);
	double dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	printf("Distance: %lf", dist);

	getch();
	return 0;
}