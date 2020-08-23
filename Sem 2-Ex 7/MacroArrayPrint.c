/* Exercise 7, Question 2
This is a program that has a macro to print the elements of an array and another macro to print the elements of the array in reverse order. */

#include <stdio.h>
//This macro uses a for loop to print the array from the main function
#define PRINT_ARRAY(array, length){\
	printf("The array is:\n");\
	for(int i=0;i<length;i++){\
		printf("%d\n", array[i]);\
	}\
}
//This macro uses a for loop to print the array from the main function in reverse by starting from the last element and moving backwards
#define REVERSE_PRINT(array, length){\
	printf("The array in reverse is:\n"); \
	for(int i=length-1;i>=0;i--){\
		printf("%d\n", array[i]);\
	}\
}

int main(void)
{
	int myArray[5] = {1,4,8,16,32}; //Initializing the array to print in the macros

	PRINT_ARRAY(myArray,5); //Passing the array and its length into the macro to print it
	printf("\n");
	REVERSE_PRINT(myArray,5); //Passing the array and its length into the macro to print it in reverse
}
