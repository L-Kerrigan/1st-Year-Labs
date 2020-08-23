/* Exercise 2, Question 1
This is a program to calculate the volume of any given number of ellipsoids when the required measurements are inputted by the user by using a function. */
#include <stdio.h>
#define PI (3.141592653589793)   //Defining Pi for later use in calculating the volume.

int main(void)
{
	int a, b, c; //Integers to hold the 3 axes
	int i, N;  //i is a counter for the for loop, and N is the number of times the loop needs to run/how many ellipsoids to calculate the volume of
	int volume(int a, int b, int c);  //Initialising the function that does the calculation of the volume in the main function

	printf("How many ellipsoids do you want to calculate the volume of?\n");
	scanf("%d", &N);  //Asking the user to input how many ellipsoids they want to calculate the volume of

	for(i=0; i<N; i++)
	{
		printf("Please enter a value for the a axis. \n");
		scanf("%d", &a);
		printf("Please enter a value for the b axis. \n");
		scanf("%d", &b);
		printf("Please enter a value for the c axis. \n");
		scanf("%d", &c);
		//Taking in the 3 axes needed to calculate the volume

		printf("The volume of ellipsoid number %d is: %d\n\n", i+1, volume(a, b, c));  //Printing the answer given by the function below
	}
}

int volume(int a,int b,int c)  //Function to calculate the volume
{
	int vol;
	vol = (1.3333)*PI*a*b*c;  //Using the decimal equivalent of 4/3 because it works
	return vol;
}
