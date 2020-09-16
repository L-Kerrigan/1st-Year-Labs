/*This is a program to calculate the roots of a quadratic equation that
takes the form: ax2 + bx + c = 0. */

#include <stdio.h>
#include <math.h>

int main(void)
{
double a, b, c;    /*These are the input values/coefficients.*/
double r1, r2;    /*These are the outputs/roots */
double disc;     /*This is the discriminant.*/

printf("Please enter the first variable.\n ");
scanf("%lf", &a);
printf("Thank you!\n ");
printf("Please enter the second variable.\n ");
scanf("%lf", &b);
printf("Thank you!\n ");
printf("Please enter the third variable.\n ");
scanf("%lf", &c);
printf("Thank you!\n ");      /*All variables have now been collected. */

disc = b*b -(4*a*c);     /*Defining the discriminant. */

r1 == (-b - sqrt(b*b - 4*a*c))/(2*a);
r2 == (-b + sqrt(b*b - 4*a*c))/(2*a);

if (a == 0)
{
	printf("The roots can't be computed when a is zero. \n");
}
else {
if (disc == 0)
{
	printf("The roots are equal.\n ");
}
else
	if (disc >0)
	{
		printf("The roots are real.\n ");
		r1 = (-b - sqrt(b*b - 4*a*c))/(2*a);
		r2 = (-b + sqrt(b*b - 4*a*c))/(2*a);

	printf("Root 1: %lf \n", r1);
	printf("Root 2: %lf \n", r2);	
	}
	else
		if (disc <0)
		{
			printf("There are no real roots/roots are imaginary. \n");
			return 0;
		}
}
		return 0;

}