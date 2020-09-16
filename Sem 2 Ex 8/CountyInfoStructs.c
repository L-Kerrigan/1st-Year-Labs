/* Exercise 8, Question 1
This is a program for filling in and initialising structures with user data then print out the town name and population
and the county's short & long name and its population. */
#include <stdio.h>
#include <stdlib.h>

//Initializing the structs needed
struct county{
	char *longName;
	char *shortName;
	unsigned int population;
} county;

struct towns{
	char *name;
	unsigned int population;
	struct county aCounty;
} town;


int main(void)
{
	struct county county[4]; //Initializing arrays of each struct
	struct towns town[5];
	char array[5][15];

	FILE *sfPtr; //Initializing another file pointer

	if((sfPtr = fopen("Towns.txt", "r")) == NULL) //Checking if the file opens correctly to read from it. If it doesn't, tell the user and end the program
	{
		printf("File couldn't be opened.");
	}
	else{ //Initializing the arrays or variables to hold the information taken in from the file
		while(!feof(sfPtr))
		{ //While the file has information that can be read, it will not stop looping
			printf("\n%-20s%-20s%-20s\n", "Town Name", "Population", "County"); //Printing out a table of headers
			int i=0;
			while(i<=4)
			{
				town[i].name=(char*)calloc(20, sizeof(char));
				fscanf(sfPtr, "%19s%u%14s", town[i].name, &town[i].population, &array[i]); //Scanning in the information from the file
				printf("%-19s %-19u %-19s\n", town[i].name, town[i].population, array[i]); //Printing the information from the file
				i++;
			}
		}
	}
	fclose(sfPtr); //Closing the file

	FILE *rfPtr; //Initializing the file pointer
	if((rfPtr = fopen("Counties.txt", "r")) == NULL) //Checking if the file opens correctly to read from it. If it doesn't, tell the user and end the program
	{
		printf("File couldn't be opened.");
	}
	else{
		printf("\n%-20s%-20s%-20s\n", "County Long Name", "County Short Name", "Population"); //Printing out a table of headers
		while(!feof(rfPtr))
		{ //While the file has information that can be read, it will not stop looping
			int i=0;
			while(i<=3)
			{
				county[i].longName=(char*)calloc(20, sizeof(char));
				county[i].shortName=(char*)calloc(3, sizeof(char));

				fscanf(rfPtr, "%19s%19s%u", county[i].longName, county[i].shortName, &county[i].population); //Scanning in the information from the file
				printf("%-20s%-20s%-20u\n", county[i].longName, county[i].shortName, county[i].population); //Printing the information from the file
				i++;
			}
		}
	}
	fclose(rfPtr);
	/*
	Didn't have enough time to figure out how to print the relevant county's information after each town. */
}
