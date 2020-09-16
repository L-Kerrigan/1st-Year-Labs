/* Exercise 2, Question 4
This program contains a recursive function gcd that returns the greatest common divisor of 2 numbers inputed by the user. */
#include <stdio.h>

int main(void)
{
	int x, y;  //Will hold the values inputted by the user
	int gcd(int x, int y);  //Initialises this function in the main function

	printf("Please enter your first value. \n");
	scanf("%d", &x);
	printf("Please enter your second value. \n");
	scanf("%d", &y);  //Taking in the two values from the user.

	printf("The greatest common divisor is %d. \n", gcd(x,y));
}

int gcd(int x, int y)
{
	int sub; //Just serves to hold values for safekeeping while calculations are done
	int a = x;  //Assigning the value of x and y to other values to keep the safe
	int b = y;

	while(b!=0)
	{
		sub = b; //Finding the GCD
		b = a%b;
		a = sub;
	}
	return a; //Returns the value of the greatest common divisor to the main function
}
