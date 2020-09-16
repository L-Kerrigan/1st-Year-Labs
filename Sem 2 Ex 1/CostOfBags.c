/* Exercise 1, Question 3
Program to ask for the number of bags to be purchased and the total cost of these bags. */
#include <stdio.h>

int main(void)
{
	int bags;
	float price; //The variables for the number of bags and the resulting price

	printf("How many bags do you wish to purchase? \n");
	scanf("%d", &bags);     //Inputting how many bags there are

	if(bags<=10)
	{
		price = bags*10;    //If there are 10 or less bags, it's 10 each
	}
	else if(bags>10 && bags<50)
	{
		price = 100+((bags-10)*9.5);  //If there are less than 50 bags, the first 10 are 10 and the following bags are 9.50 each
	}
	else
	{
		price = 480+((bags-50)*9);  //If there are more than 50, then the first 10 are 10, the next 40 are 9.50 and the remainder are 9
	}

	printf("Number of Bags: %d\n", bags);
	printf("Total Cost: %.2f\n", price);   //Printing the price
}
