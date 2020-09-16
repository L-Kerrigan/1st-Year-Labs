/* Program to compute the value in an array of length N that occurs at least
(N/2 + 1) times, if that value even exists. */
/* I really didn't know how to do this one. */

#include <stdio.h>

int main(void)
{
	int N, i, b;
	
	printf("Please enter a value for N. \n");
	scanf("%d", &N);
	printf("Thank you. \n");
	int a[N];
	
	for (b = 0;b<N;b++)
	{
		printf("Please enter %d values for the array. \n", N);
		scanf("%d", &a[b]);
	}
	
	int m = a[0];
	int c = 0;
	
	for (i = 0;i<N;++i)
	{
		if (c == 0)
		{
			m = a[i];
			c++;
		}
		
		if (m == a[i])
		{
			c++;
		}
		else
		{
			--c;
		}
	}
	printf("%d occurs at least N/2 + 1 times. \n", m);
	return 0;
}