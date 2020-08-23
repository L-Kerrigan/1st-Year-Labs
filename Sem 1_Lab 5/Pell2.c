/* This is a program to produce the first N numbers of the Pell Sequence.*/

#include <stdio.h>

int main(void)
{
	int N;
	int c = 100;    /* After the 26th value, it has the same problem as the Fibonnaci sequence, which I couldn't fix. */
	
	printf("Please enter a value for N. \n");
	scanf("%d", &N);
	printf("Thank you. \n");
	int x[c];
	
	x[0] = 0;
	x[1] = 1;
	
	if (N==0)
	{
		printf("%d \n", x[0]);
	}
	else if (N==1)
	{
		printf("%d \n%d \n", x[0], x[1]);
	}
	
	else
	{
		printf("0 \n1 \n");
		for (c=2;c<N;c=c+1)
		{
			x[c] = 2*(x[c-1]) + (x[c-2]);
			printf("%d \n", x[c]);
		}
	}
	return 0;
}