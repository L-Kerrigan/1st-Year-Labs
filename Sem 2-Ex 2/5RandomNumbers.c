/* Exercise 2, Question 3
This program will select a random set of numbers every time it is run. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i; //Counter for the for loop
	srand(time(NULL)); //Function to randomise numbers

	for(i=0;i<5;i++)
	{
		printf("%5d", 1+(rand() % 39));  //Produces 5 random numbers between 1 and 39, and produces them in 5 separate columns
	}
	printf("\nAnd the Thunderball is: %d\n", 1+(rand() % 14)); //The additional random number between 1 and 14
}
