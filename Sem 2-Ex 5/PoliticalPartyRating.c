/* Exercise 5, Question 3
This program will ask users to rate the performance of political parties by rating the party's performance out of ten.
This will continue to run until it is indicated that there are no users left. The program will then summarise the results
and order them from highest to lowest ranking. */
#include <stdio.h>
#include <string.h>

//Intialising functions to be used throughout the program
void enterData();
void printResults();
void sortResults();

//Initialisng the array for the ratings of each party
int partyRatings[5];

int main(void)
{
	char ans;  //To hold the character that indicates whether the user wishes to continue or not
	char partyArray[5][13]={{"Fine Fail"},{"Fine Gael"},{"Sinn Fein"},{"Green Party"},{"Independent"}};
	int counter=0;  //To count how many users inputted responses in order to get the average later on

	do{ //Using a do/while loop because it has to run at least once
		enterData(partyRatings, partyArray); //Calls the function to input ratings
		counter++; //Increments counter by 1 every time the loop runs

		printf("Do you wish to make another entry? Type Y or N. \n");
		scanf(" %c", &ans); //Finds out if the user wishes to continue or not
		printf("\n");

	}while(ans == 'Y'|| ans == 'y');  //If the user enter lower or upper case y, it will repeat. For anything else it will stop the loop and move on

	sortResults(partyArray, partyRatings);  //Calling the function to organise the results from the highest to the lowest average rating
	printResults(partyArray, partyRatings, counter);  //Calling the function to print the organised results
}

void enterData(int ratings[], char party[5][13])
{
	int i; //A counter for the loop
	int rate;  //A variable to hold the given rating until it's added to the total in the partyRatings array

	for(i=0;i<5;i++)
	{
		printf("Please rate %s out of 10. \n", party[i]);
		scanf("%d", &rate);  //Taking in the ratings for each party, one at a time

		if(rate<0 || rate>10)
		{
			printf("That is an invalid rating.\n");
			i--;  //Ensures that the rating given is between 0 and 10 as specified. If it isn't, the counter is decremented so the question is asked again for the same party
		}
		else{
			ratings[i] +=rate; //Once it's confirmed that the rating is between 0 and 10, it's added to the total in the partyRatings function
		}
	}
}

void sortResults(char party[5][13], int ratings[])
{
	int temp1, i, j; //temp1 will hold the ratings temporarily as they're swapped around. i and j are counters for the loops
	char temp2[13]; //Temporarily holds the name of the party to be swapped

	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(ratings[i]<ratings[j])
			{
				temp1=ratings[j]; //Assigns the value at position j to temp1
				ratings[j]=ratings[i]; //Assigns the value at position i to position j, since the value at j has already been safely copied into temp1
				ratings[i]=temp1; //Assigns the value in temp1 to the position i, since the value at i has already been safely copied into j and can be overwritten. We have now swapped the places of the party ratings at positions i and j

				strcpy(temp2, party[j]); //Copies the string from position j into the array temp2
				strcpy(party[j], party[i]); //Copies the string at position i into position j, since the string at j has already been safely copied into the array temp2
				strcpy(party[i], temp2); //Copies the string from temp2 into the position i, since the string at position i has already been copied safely into position j and can be overwritten. We have now swapped the places of the parties at positions i and j
			}
			//Since both of the above swaps are done with the same counters, the party names will still match the right party rating
		}
	}
}

void printResults(char arr1[5][13], int arr2[], int c)
{
	int i; //A counter for the loop
	for(i=0;i<5;i++)
	{
		int avg=arr2[i]/c; //Calculating the average rating for each party as we go through them
		printf("%s has an average rating of: %d\n", arr1[i], avg); //Printing the party and its corresponding average
	}
}
