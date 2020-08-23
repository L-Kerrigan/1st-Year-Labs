/* Exercise 3, Question 1
This program will contain 4 functions, one that measures how many people enter a concert,
one that measures how many people leave a concert,
one that calculates how much money is earned from the tickets which cost 20
and one measures how many people are currently at the concert.
*/
#include <stdio.h>

int peopleEnter(); //Declaring the functions
int peopleLeave();
int moneyEarned();
int people; //Global variables that can be used in any function without being declared again
int a=0, b=0;

int main(void)
{
	int i;
	printf("Enter the number of people at the concert right now. \n");
	scanf("%d", &people); //Retrieving the number of people at the concert to begin with

	//I wasn't sure what you wanted us to do for this part. Tutors gave different answers, so I just set a number of people that would enter at the beginning
	for(i=0;i<5;i++)
	{
		peopleEnter();
	}

	for(i=0;i<3;i++)
	{
		peopleLeave();
	}

	printf("%d people have entered the concert. \n", peopleEnter());  //Printing the results of each function
	printf("%d people have left the concert. \n", peopleLeave());
	printf("%d people are currently at the concert. \n", people);
	printf("The total amount of money earned is %d \n", moneyEarned());

}

int peopleEnter(void)
{
	people++;  //This increased the number of people at the concert
	a++;  //This acted as a counter for how many people entered the concert
	return a;
}

int peopleLeave(void)
{
	people--;  //This decreased the number of people at the concert
	b++;  //This acted as a counter for how many people left the concert
	return b;
}

int moneyEarned(void)
{
	static int money;  //Introducing a static variable
	money = people*20;  //A local variable to keep count of the price
	return money;
}
