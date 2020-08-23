/* Exercise 7, Question 4
This program has 3 functions. One will return the sum of a number of integers that were given as arguments,
another will return the product of a number of integers that were given as arguments, and the last will print a number
of integers that were given as arguments. */

#include <stdio.h>
#include <stdarg.h>

//Initializing all the functions I'll need
int adder(int a, ...);
int multiplier(int a, ...);
void myPrinter(int a, int(*calculator)(int a, ...));


int main(void)
{
	int num, calc; //Variables to hold each number and the response when asking what calculation to do

	printf("Please enter 1 to add or 2 to multiply these two numbers.\n"); //Asking the user to enter 1 or 2 depending on whether they want to multiply or add the two numbers
	scanf("%d", &calc);

	if(calc == 1) //If the user enters 1, the print function will be called and the two numbers and the adder function will be passed in as arguments
	{
		myPrinter(num, adder);
	}

	else if(calc == 2) //If the user enters 2, the print function will be called and the two numbers and the multiplier function will be passed in as arguments
	{

		myPrinter(num, multiplier);
	}
	else { //If the user enters anything other than 1 or 2 for calc, the program will respond with an error message and terminate
		printf("\nYou didn't select what kind of calculation to make.\n");
		return 0;
	}
}

int adder(int a, ...) //Adder function takes in the numbers as arguments
{
	int sum=0; //To hold the sum of the given numbers
	int i; //Counter
	va_list ap;
	va_start(ap, a);

	for(i=0;i<a;i++)
	{
		//printf("Please enter the values to be calculated. \n");
		//scanf("%d", &ap);
		sum+=va_arg(ap, int);
	}
	va_end(ap);
	return sum; //It returns the sum of the numbers
}

int multiplier(int a, ...) //Multiplier function takes in the numbers as arguments
{
	int mul=1;  //To hold the product of the given numbers
	int i; //Counter
	va_list ap;
	va_start(ap, a);

	for(i=0;i<a;i++)
	{
		mul*=va_arg(ap, int);
	}
	va_end(ap);
	return mul; //It returns the product of the numbers
}

void myPrinter(int a, int(*calculator)(int a, ...))
{
	int result = ((*calculator)(a, 1,2,3,4,5,6)); //Calls the function passed in above to multiply or add the two numbers together
	printf("\nThe answer is: %d \n", result); //Print the result of the selected calculation
}
