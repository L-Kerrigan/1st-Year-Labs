#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 10000

int main(void)
{
	char msg[MAX_STR_LEN+1];
	int i=0, j=0, h=0;
	
	printf("Please enter a string no more than 10,000 characters. \n");
	fgets(msg, MAX_STR_LEN+1, stdin);
	printf("Thank you! \n\n");
	
	while(i<MAX_STR_LEN)
	{
		if((msg[i] == 'D' || msg[i] == 'd') && (msg[i+1] == 'O' || msg[i+1] == 'o') && (msg[i+2] == 'G' || msg[i+2] == 'g') && (msg[i+3] =='S' ||msg[i+3] =='s' || msg[i+3] ==' ' || msg[i+3]=='\n' || msg[i+3]=='\t' || msg[i+3]=='\0'))
		{
			{
				j++;
			}
		}
		i++;
	}
	printf("The word 'dog' occurs %d time(s) in this string. \n", j);
	return 0;
}