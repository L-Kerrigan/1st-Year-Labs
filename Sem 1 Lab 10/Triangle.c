#include <stdio.h>

int main(void)
{
	int base, height;
	int areaTriangle(int base, int height);
	
	printf("Please enter the base length. \n");
	scanf("%d", &base);
	printf("Thank you! \n\n");
	
	printf("Please enter the height. \n");
	scanf("%d", &height);
	printf("Thank you! \n\n");
	
	printf("The area of the triangle is: %d\n", areaTriangle(base, height));
	return 0;
}

int areaTriangle(int base, int height)
{
	int area;
	
	base=base/2;
	area=base*height;
	
	return area;
}