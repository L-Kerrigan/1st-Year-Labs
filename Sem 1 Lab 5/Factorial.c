/*This program is for listing the factorials of a number N.*/

#include <stdio.h>

int main(void)
{
	int N;
	int ans = 1;
	int count;
	
	printf("Please enter a value for N. \n");
	scanf("%d", &N);
	printf("Thank you. \n\n");
	
	
	for (count=0;count<N;count++)
	{
		ans = ans *(count+1);
		printf("%d \n", ans);
	}
	
	printf("Answer: %d \n", ans);
	return 0;
}