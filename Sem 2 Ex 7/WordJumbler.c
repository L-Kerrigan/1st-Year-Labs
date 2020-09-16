/* Exercise 7, Question 3
This program uses functions to jumble the order of words, print the words and select a random word after that. */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Initialising all the required functions
void randomiseArray(int arraySize);
void swap(int *a, int *b);
void printArray(char(*function)(int arraySize);
char randomWord(int arraySize);

//Making the array global to pass it between functions easier
char *myArray[]={"COMP10120","is","my","favourite","module","and","I","learn","lots","of","interesting","things"}; //I got an error with this array that I didn't understad and couldn't fix

int main(void)
{
	int arraySize =(sizeof(myArray)/sizeof(myArray[0]));  //To find the size of the array itself

	//Calling the functions to print the randomised array, then the random word
	randomiseArray(int arraySize);
	printArray(int arraySize);
	randomWord(int arraySize);
}


void swap(int *a, int *b) //Just an extra function to make the swapping process cleaner and easier to follow
{
	int temp;
	temp = *a;  //Copy the int a to the int temp
	*a = *b;  //Since a's value is saved in temp, we replace the int a with the int b
	*b = temp; //Since the int b is safely stored away, we assign the value at temp to b
}


void randomiseArray(int arraySize)
{
	int i; //Counter
	srand(time(NULL)); //Initialising the function to randomise numbers

	for(i=0;i<arraySize;i++)
	{
		int j=rand() % arraySize;  //Lets j equal a random number within the size of the array
		swap(myArray[i], myArray[j]);  //Uses the swap function to swap the elements at position i and the random position j
	}

}


char randomWord(int arraySize)
{
	int i; //Counter
	srand(time(NULL)); //Initialising the function to randomise numbers

	int j=rand() % arraySize;  //Lets j equal a random number within the size of the array
	printf("%s", myArray[j]);	//Prints the word at the random position j
}


void printArray(int arraySize)
{
	int i; //Counter

	printf("The array is now: \n");
	for(i=0;i<arraySize;i++) //Loop to print the elements of the array
	{
		printf("%s ", myArray[i]);
	}
	printf("\n");
}
