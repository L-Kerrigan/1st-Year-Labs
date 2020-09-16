/* Program to read integer N and write out base 2 representation of that integer. */

#include <stdio.h>

int main(void)
{
	int N, i;
	int bit;
	int a[8];
	
	printf("Enter a value for N. \n");
	scanf("%d", &N);
	printf("Thank you. \n");
	int Num = N;

	for (i = 0;Num != 0;i++)
	{
		bit = Num%2;
		Num = Num/2;
		a[i] = Num;
		printf("%d remainder %d \n", a[i], bit);
	}
	return 0;
}