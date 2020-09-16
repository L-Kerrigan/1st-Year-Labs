/* This is a program to produce the first n numbers of the Fibonnaci Sequence.*/

#include <stdio.h>

int main(void)
{
	int n;
	int ans;
	int a1 = 1;
	int a2 = 1;
	int count = 0;
	
	printf("Please enter the value of n. \n");
	scanf("%d", &n);
	printf("Thank you. \n");
	
	if (n==1)
	{
		printf("1 \n");
		count = count + 1;
	}
	
	else if (n==2)
	{
		printf("1 \n1 \n");
		count = count + 2;
	}
	
	else
	{
		printf("1 \n1 \n");   /*Starting off the sequence. It won't print first 2 correctly. */
		ans = a1 + a2;
		count = count +3;
		printf("%d\n", ans);
	}
	
	while (count < n)
	{
		a2 = a1;
		a1 = ans;
		ans = a1 + a2;
		count = count + 1;
		
		if (ans < 0)     /*To get rid of the negative values. I don't know how to fix the error.*/
		{
			ans = ans * -1;
		}
		printf("%d \n", ans);
		
	}
	
	return 0;
}