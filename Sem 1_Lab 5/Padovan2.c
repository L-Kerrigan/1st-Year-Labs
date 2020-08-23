/* This is a program to produce the first N numbers of the Padovan Sequence.*/

#include <stdio.h>

int main(void)
{
	int N;
	int c = 100;    /* After the a certain value, it also has the same problem as the Fibonnaci sequence, which I couldn't fix. */
	
	printf("Please enter a value for N. \n");
	scanf("%d", &N);
	printf("Thank you. \n");
	int x[c];
	
	x[1] = 1;
	x[2] = 1;
	x[3] = 1; /*Allocating values for first 3 values of Padovan Sequence */
	
	if (N==1)
	{
		printf("%d \n", x[1]);
	}
	else if (N==2)
	{
		printf("%d \n%d \n", x[2], x[2]);
	}
	else if (N==3)
	{
		printf("%d \n%d \n%d \n", x[3], x[3], x[3]);
	}
	else
	{
		printf("1 \n1 \n1 \n", x[3]);
		for (c=4;c<N;c=c+1)
		{
			x[c] = (x[c-2]) + (x[c-3]);
			printf("%d \n", x[c]);
		}
	}
	return 0;
}