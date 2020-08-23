/* Exercise 2, Question 5
This program converts binary to decimal using recursive techniques. */
//Demonstration????
#include <stdio.h>

int main(void)
{
	int number; //Decimal inputted by the user
	int binary(int number);  //Initialising the function that converts the decimal to binary

	printf("Please enter a decimal to convert to binary.\n");
	scanf("%d", &number);  //Taking in the inputted decimal integer

	printf("The binary version is: %d\n", binary(number));
}

int binary(int number)  //To convert the binary to decimal
{
	if (number == 0)
	{
		return 0;
	}
	else
	{
		return ((number%2)+10*binary(number/2));
	}
}
