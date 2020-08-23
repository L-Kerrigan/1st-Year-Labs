#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b, c;
	double root1(double a, double b, double c);
	double root2(double a, double b, double c);
	
	printf("Please enter the first variable. \n");
	scanf("%lf", &a);
	printf("Thank you! \n");
	printf("Please enter the second variable. \n");
	scanf("%lf", &b);
	printf("Thank you! \n");
	printf("Please enter the third variable. \n");
	scanf("%lf", &c);
	printf("Thank you! \n");
	
	double disc = b*b -(4*a*c);
	
	if (a == 0)
	{
		printf("The roots can't be computed when a is zero. \n");
	}
	else
		if (disc <0)
		{
			printf("There are no real roots/roots are imaginary. \n");
		}
	else
		if (disc == 0)
		{
			printf("The roots are equal.\n ");
		}
	else
	{
	
	double root1(double a, double b, double c);
	double root2(double a, double b, double c);
	printf("Root 1: %lf \nRoot 2: %lf \n", root1(a,b,c),root2(a,b,c));
	}
	return 0;
}

double root1(double a, double b, double c)
{
	double r1;
	r1 = (-b - sqrt(b*b - 4*a*c))/(2*a);
	return r1;
}

double root2(double a, double b, double c)
{
	double r2;
	r2 = (-b + sqrt(b*b - 4*a*c))/(2*a);
	return r2;
}