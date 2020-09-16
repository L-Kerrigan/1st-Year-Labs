/* Exercise 2, Question 2
This is a program to calculate of the day of the week based on the date inputted by the user. */
#include <stdio.h>

int main(void)
{
	int date, month, year;
	int day(int date, int month, int year); //Initialises the other function within the main function so it can be used here

	printf("What is the date? Enter in the form: dd mm yyyy\n");
	scanf("%d %d %d", &date, &month, &year);  //Takes in user-inputted values for the date, month and year

	if(month==1)  //In Zeller's Congruence, January and February are counted as months 13 and 14 of the previous year
	{
		month=13;
		year--;
	}
	if(month==2) //These 2 statements just change the months to either 13 or 14 and decrement the year by one, which then allows the formula to produce the correct result
	{
		month=14;
		year--;
	}

	if(day(date,month,year)==0)  //Filters through the value the function returns and prints the appropriate statement through if else statements
	{
		printf("Today is Saturday. \n");
	}
	else if(day(date,month,year)==1)  //
	{
		printf("Today is Sunday. \n");
	}
	else if(day(date,month,year)==2)
	{
		printf("Today is Monday. \n");
	}
	else if(day(date,month,year)==3)
	{
		printf("Today is Tuesday. \n");
	}
	else if(day(date,month,year)==4)
	{
		printf("Today is Wednesday. \n");
	}
	else if(day(date,month,year)==5)
	{
		printf("Today is Thursday. \n");
	}
	else
	{
		printf("Today is Friday. \n");
	} //This is so long and messy. Can't think of a better way to do this before the deadline
}

int day(int date, int month, int year)  //Takes in the inputted date, month and year from the main function
{
	int h;
	int K = year%100;
	int J = year/100;

	h = (date+((13*(month+1))/5)+K+(K/4)+(J/4)+(5*J));
	h = h%7;

	return h;  //Any time the function is called it will return the value from the formula above
}
