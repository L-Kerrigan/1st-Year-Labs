/* Exercise 1, Question 1
A program that will receive the heights of 3 children, then give the average height, the tallest and the shortest. */
#include <stdio.h>

int main(void)
{
	int h1, h2, h3;  //The variables for the 3 heights
	int avg, tallest, shortest;

	printf("Please enter the first height: \n");
	scanf("%d", &h1);
	printf("Please enter the second height: \n");
	scanf("%d", &h2);
	printf("Please enter the third height: \n");
	scanf("%d", &h3);  //Inputting the heights of the 3 children

	avg =(h1+h2+h3)/3;  //Finding the average

	if(h1>h2 && h1>h3)
	{
		tallest = h1;
	}
	else if(h2>h1 && h2>h3)
	{
		tallest = h2;
	}
	else
	{
		tallest = h3;
	}    //Finding the tallest

	if(h1<h2 && h1<h3)
	{
		shortest = h1;
	}
	else if(h2<h1 && h2<h3)
	{
		shortest = h2;
	}
	else
	{
		shortest = h3;
	}    //Finding the shortest

	printf("The average height is %d. \n", avg);
	printf("The tallest is %d. \n", tallest);
	printf("The shortest is %d. \n", shortest);  //Output aka the answers
}
