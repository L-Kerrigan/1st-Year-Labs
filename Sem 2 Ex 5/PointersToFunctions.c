/* Exercise 5, Question 1
This program is for demonstrating pointers to functions with 3 different arrays: reverseArray, randomiseArray, and printArray. */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Initiaising all the functions needed globally
void reverseArray(int arraySize, int a[]);
void randomiseArray(int arraySize, int a[]);
void printArray(int arraySize, int a[], void(*arrayFunction)(int arraySize, int a[]));
void swap(int *a, int *b);

//Intialising the array globally
int myArray[10] = {2,4,6,8,10,12,14,16,18,20};

int main(void) //The main will just vall the required functions to action
{
	int ans;
	int arraySize =(sizeof(myArray)/sizeof(myArray[0]));  //To find the size of the array itself
	printf("Do you want to 1) Reverse the array or 2) Randomise the array? Please enter 1 or 2. \n");  //Checks if the user wants to randomise or reverse the array
	scanf("%d", &ans);

	switch(ans) //This is just an extra something so the user can choose between randomising the array or reversing it
	{
		case 1:
		reverseArray(arraySize, myArray);
		printArray(arraySize, myArray, reverseArray);
		break;

		case 2:
		randomiseArray(arraySize, myArray);
		printArray(arraySize, myArray, reverseArray);
		break;

		default: break;
	}
}

void reverseArray(int arraySize, int a[]) //Does this use pointers though???
{
	int i, j; //Counters

	for(i=0, j=arraySize-1;i<(arraySize-1)/2;i++, j--)
	{ //i will keep incrementing until it reaches the mid-way point, and j will keep decrementing until it reaches mid-way too
		swap(&a[i], &a[j]);
	}
}


void swap(int *a, int *b) //Just an extra function to make the swapping process cleaner and easier to follow
{
	int temp;
	temp = *a;  //Copy the int a to the int temp
	*a = *b;  //Since a's value is saved in temp, we replace the int a with the int b
	*b = temp; //Since the int b is safely stored away, we assign the value at temp to b
}


void randomiseArray(int arraySize, int a[])
{
	int i; //Counter
	srand(time(NULL)); //Initislising the function to randomise numbers

	for(i=0;i<arraySize;i++)
	{
		int j=rand() % arraySize;  //Lets j equal a random number within the size of the array
		swap(&a[i], &a[j]);  //Uses the swap function to swap the elements at position i and the random position j
	}
}


void printArray(int arraySize, int a[], void(*arrayFunction)(int arraySize, int a[]))
{
	int i; //Counter

	printf("The array is now: \n");
	for(i=0;i<arraySize;i++) //Loop to print the elements of the array
	{
		printf("%d ", myArray[i]);
	}
	printf("\n");
}
