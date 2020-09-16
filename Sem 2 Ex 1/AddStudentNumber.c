/* Exercise 1, Question 2
 A program that will receive an input of a student number, print each digit on a new line, and add them together. */
#include <stdio.h>
#include <math.h>

int main(void)
{
	int total=0, dig;
	int div=pow(10,7);  //This number will divide the student number to single out 1 digit
	long number; //The number is long, so using long decimal data type
	int i;

	printf("Enter your eight digit student number. \n");
	scanf("%ld", &number);

	if(number>100000000)
	{
		printf("\nThat is not a valid student number. \n");   //If the number is longer than 8 digits, it's invalid
	}
	else
	{
		while(i<=7)
		{
			dig = number/div; //Getting the individual digit
			printf("%d \n", dig);

			number -=(div*dig); //Taking away the multiple of 10 from the original number
			div /= 10;  //Decreasing the multiple by 10 in order to single out the next digit

			total += dig; //Adding the individual digits together
			i++;
		}
		printf("The total of these numbers is: %d\n", total);  //Printing answer of sum of individual digits
	}
}
