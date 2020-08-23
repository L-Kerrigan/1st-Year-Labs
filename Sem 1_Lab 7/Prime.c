#include <stdio.h>
#define b 10000

int main(void)
{
	int N;    //Need to input a positive integer for the N
	int prime[b];
	
	printf("Please enter a positive integer for N. \n");
	scanf("%d", &N);
	printf("Thank you. \n");
	
	if(N<0)
	{
		while (N<0)
		{
			printf("That isn't a positive integer. \n");
			printf("Please enter a positive integer for N. \n");
			scanf("%d", &N);		//To ignore any negative integers and ask for a positive one again
		}
	}

/* prime[number] = 1 if that number is prime
prime[anothernumber] = 0 if number is not prime */

	for(int i=0;i<=N;i++)
	{
		prime[i]=1;
	}
	
	prime[0]=0; //0 isn't prime
	prime[1]=0; //1 isn't prime
	
	for(int i=2;i<=N;i++)
	{
		if (prime[i]==1)
		{
			for(int j = i*2;j<=N;j+=i) //First multiple of i =i*2. j are the multiples of the prime numbers
			{
				prime[j] = 0;   //Says that j isn't prime. It's a mulitple of i.
			}
		}
	}
	int primes[1000];   //To be filled with the prime numbers from the first array
	int p = 0;
	
	for(int i=2;i<=N;i++)
	{
		if (prime[i] == 1)
		{
			p++;
			primes[p] = i;
		
		}
	}
	
	for(int i=1;i<=p;i++)
	{
		printf("%d ", primes[i]);
	}
	return 0;
}
	