#include <stdio.h>
#define PI 3.14159265359

int main(void)
{
	double areaCircle(int radius);
	int radius;
	
	printf("Please enter a value for the radius. \n");
	scanf("%d", &radius);
	printf("Thank you! \n\n");
	
	double areaCircle(int radius);
	printf("The area is: %lf\n", areaCircle(radius));
	return 0;
}

double areaCircle(int radius)
{
	double area;
	area=radius*PI*radius;
	
	return area;
}
