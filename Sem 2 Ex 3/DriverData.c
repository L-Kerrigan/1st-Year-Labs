/* Exercise 3, Question 4
This program shows the data of each driver, including their average accelerations,
their average overall acceleration and whether they get a discount or not. */
#include <stdio.h>

int main(void)
{
	//Initialising the 2 dimensional array to hold the acclerations by each driver
	int acceleration[5][10] = {{3,1,3,4,6,7,3,2,5,3},{2,2,2,3,4,4,3,3,3,2},{5,6,7,6,5,3,3,3,3,3},{3,3,3,3,4,4,3,2,1,3},{2,3,4,6,6,2,5,1,3,3}};
	int driver, i, j=0; //Driver variable for taking in the number of the driver the user wants, and i is a counter
	float sum; //For use in finding the average over all trips by each driver

	printf("Please enter the number of the driver whose summary you want to see. \n");
	scanf("%d", &driver);

	printf("Driver %d Summary: \n\n", driver);
	printf("Acceleration Recordings: \n");

	for(i=0;i<10;i++)
	{
		printf("%d ", acceleration[driver-1][i]);  //Printing the accelerations over 10 trips for the driver the user specified
		sum=sum+acceleration[driver-1][i]; //Adding all accelerations of the relevant row together
	}

	switch(driver){   //Based on the number the user inputs, the appropriate information for each driver will be returned
		case 1:
			printf("\nMax acceleration for driver %d was in trip 6.\n", driver);
			break;
		case 2:
			printf("\nMax acceleration for driver %d was in trips 5 and 6.\n", driver);
			break;
		case 3:
			printf("\nMax acceleration for driver %d was in trip 3.\n", driver);
			break;
		case 4:
			printf("\nMax acceleration for driver %d was in trips 5 and 6.\n", driver);
			break;
		case 5:
			printf("\nMax acceleration for driver %d was in trips 3 and 4.\n", driver);
			break;

			default: break; //If a number outside 1-5 is inputted, nothing will happen
	}

	sum/=10;  //To find the average acceleration over the ten trips
	printf("Average acceleration for driver %d was: %.1f.\n", driver, sum);

	//If the average is over 5 or one of the 10 trips has an acceleration greater than 5, the counter (j) goes up
	if(sum>5)
	{
		j++;
	}
	else if(sum<5)
	{
		for(i=0;i<=10;i++)
		{
			if((acceleration[driver-1][i])>5)
			{
				j++;
			}
		}
	}

	printf("Discount: ");
	if(j>0) //If the counter's greater than 0, then either the average or one of the trips has an acceleration higher than 5
	{
		printf("No discount to be applied. \n");
	}
	else{
		printf("Discount to be applied. \n");
	}
}
