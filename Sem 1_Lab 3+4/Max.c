/* Program to determine the max value from x,y,z. 
I wasn't sure what was meant by the question, but this program chooses the highest value of the 4 variables.
I know it said 6, but there isn't much of a difference between the two.
I know there's most likely a neater way to do this, but this is all I could come up with before the deadline.*/

#include <stdio.h>
#define MAX_SIZE 1
int main(void)
{
	double x, y, z, w;
	double max;
	
	printf("Please enter the first variable. \n");
	scanf(" %lf", &x);
	printf("Thank you!\n ");
	printf("Please enter the second variable. \n");
	scanf(" %lf", &y);
	printf("Thank you!\n ");
	printf("Please enter the third variable. \n");
	scanf(" %lf", &z);
	printf("Thank you!\n ");
	printf("Please enter the fourth variable. \n");
	scanf(" %lf", &w);
	printf("Thank you!\n ");	/*Variables gathered */
	
	if (x>y && x>z && x>w)     /*Deciding which is the largest variable. */
	{
		max = x;
	}
	else
		if (y>x && y>z && y>w)
		{
			max = y;
		}
	else
		if (z>x && z>y && z>y)
		{
			max = z;
		}
		else
	{
		max = w;
	}
	
	
	printf("Max: %lf \n", max);
	
	return 0;
}