/* Exercise 4, Question 1
This is a program to detect the size of 9 different variables. */
#include <stdio.h>
#define SIZE 10 //To keep both arrays the same size for convenience

int main(void)
{
	//Initialising different variables to use in the sizeof functiom
	int integer;
	char character;
	long longInteger;
	long long longerInteger;
	double doublePrecision;
	long double longDoublePrecision;
	float floatingPoint;
	int array[SIZE];
	int *array2[SIZE];

	//The sizeof function can be used to print the size of a variable. Since all the variables are empty the printed size is the size of the variable itself
	printf("Size of an integer: %d bytes\n", sizeof(integer));
	printf("Size of a character: %d bytes\n", sizeof(character));
	printf("Size of a long integer: %d bytes\n", sizeof(longInteger));
	printf("Size of a long long integer: %d bytes\n", sizeof(longerInteger));
	printf("Size of a double precision decimal: %d bytes\n", sizeof(doublePrecision));
	printf("Size of a long double precision decimal: %d bytes\n", sizeof(longDoublePrecision));
	printf("Size of a floating point number: %d bytes\n", sizeof(floatingPoint));
	printf("Size of an integer array: %d bytes\n", sizeof(array));
	printf("Size of the pointer to an (integer) array: %d bytes\n", sizeof(*array2));
	//I initialised the arrays at 10, but that does affect the size of the variable
}
