/* Exercise 7, Question 1
This is a program that defines and uses 2 macros to calculate the minimum of 4 integers. */

#include <stdio.h>
#define MIN(x,y)((x>y) ? (y) : (x))  //If the statement is true, it will print y, otherwise it will print x
#define MIN4(i,v,w,z) ((MIN(i,v))>(MIN(w,z)) ? (MIN(w,z)) : (MIN(i,v))) //This uses the macro abpve to compare the minimum of 2 pairs of variables. The smallest of these 2 minimums will then be printed using the same method as the previous macro

int main(void)
{
	int a, b, c, d; //Initializing 4 variables to hold each value
	int min_1, min_2, minimum; //Initializing a variable to hold the minimum

	printf("Please enter the 1st value:\n"); //Asking the user for the 4 values
	scanf("%d", &a);
	printf("Please enter the 2nd value:\n");
	scanf("%d", &b);
	printf("Please enter the 3rd value:\n");
	scanf("%d", &c);
	printf("Please enter the 4th value:\n");
	scanf("%d", &d);

	minimum = MIN4(a,b,c,d); //Assigning the smallest value to the variable "minimum"

	printf("Smallest value is: %d\n",minimum); //Printing the result
}
