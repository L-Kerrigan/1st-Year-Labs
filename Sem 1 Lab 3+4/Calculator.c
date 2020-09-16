/* This program is a calculator for question 1 of lab 4 (else/if statements). */

#include <stdio.h>
#include <math.h>

int main(void)
{
	double x, y; /*These are the input values.*/
	char s;  /*This is the operator. */
	double r;  /*This is the output. */
	
	printf("Please enter the first variable. \n");
	scanf(" %lf", &x);
	printf("Thank you!\n ");
	printf("Please enter an operator (+, -, * or /). \n");
	scanf(" %c", &s);
	printf("Thank you!\n ");
	printf("Please enter the second variable. \n");
	scanf(" %lf", &y);
	printf("Thank you!\n ");    /* All variables/operators have been gathered. */
	
/* Deciding which equation to use. */
if (s == '+')
{
	r = (x+y);
	printf("Answer: %lf \n", r);
}
	
	else
		if (s == '-')
	{
		r = (x-y);
		printf("Answer: %lf \n", r);
	}
	
	else
		if (s == '*')
	{
		r = (x*y);
		printf("Answer: %lf \n", r);
	}
	
	else
		if (s == '/')
	{
		if (y == 0)
		{
			printf("You can't divide by zero. \n");
		}
		else 
		{
			r = (x/y);
			printf("Answer: %lf\n", r);
		}
	}
	return 0;
}