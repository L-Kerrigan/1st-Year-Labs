#include <stdio.h>
#define MAX_STR_LEN 10000

int main(void)
{
	char msg[MAX_STR_LEN+1];
	char wordCount(char msg[MAX_STR_LEN+1]);
	int j;
	
	printf("Please enter a string no more than 10,000 characters. \n");
	fgets(msg, MAX_STR_LEN+1, stdin);
	printf("Thank you! \n\n");
	
	char wordCount(char msg[MAX_STR_LEN+1]);
	printf("There are %d words in this string. \n", wordCount(msg));
	return 0;	
}
	
	
	
char wordCount(char msg[MAX_STR_LEN+1])
{
	int i=0, j=0;
	
	while (i<MAX_STR_LEN && msg[i]!='\0')
	{
		if((msg[i] == ' ') || (msg[i] == '\t') || (msg[i] == '\n'))
		{
			j++;
		}
		i++;
	}
	return j;
}