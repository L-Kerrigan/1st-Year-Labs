/* Exercise 5, Question 2
Program receives an integer array as a parameter and modifies array elements by mulriplying each one by 10.*/
#include <stdio.h>

void multiply(); //Initialising the required functiom
int arraySize;

int main(void)
{
	int i; //A counter of the loop
	int myArray[10]; //Initialising the array
	int arraySize=(sizeof(myArray)/sizeof(myArray[0])); //Finding the size of the array

	for(i=0;i<10;i++)
	{
		printf("Please input the next element of the array(Only 10 numbers). \n");
		scanf("%d", &myArray[i]); //Taking in the elements of the array

		multiply(arraySize, &myArray[i]); //Calling the function to multiply each element by 10
	}

	printf("\nThe final array: \n");
	for(i=0;i<=arraySize-1;i++)  //Printing each element of the array after the multiplication has taken place
	{
		printf("%d ", myArray[i]);
	}
}

void multiply(int arraySize, int *a)
{
	*a *= 10; //Carrying out the mutiplication
}
