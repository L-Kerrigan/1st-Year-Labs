#include <stdio.h>
#define MAX_STR_LEN 10000

int main(void)
{
	char perm[] ={'q','j','c','z','i','e','a','u','n','g','s','d','f','x','m','p','h','y','b','k','l','o','r','t','v','w'};
	char msg[MAX_STR_LEN+1];
	char ch;
	int i=0;
	char inputString;
	
	printf("Please enter a string no more than 10,000 characters. \n");
	do
	{
		inputString=getchar();
	}
	while (inputString == '\0');
	
	printf("Thank you. \n");
	
	while(i < MAX_STR_LEN && inputString != '\t' && inputString != '\n')
	{
		msg[i]=inputString;
		if(inputString>='a' && inputString <='z')
		{
			int j = (inputString - 97);
			msg[i]=perm[j];
		}
		else
			if(inputString>='A' && inputString <='Z')
			{
				int h = (inputString - 65);
				msg[i]=perm[h];
			}
			i++;
			inputString = getchar();
	}
	msg[i] = '\0';
	printf("Result: %s \n", msg);
	
	return 0;
}