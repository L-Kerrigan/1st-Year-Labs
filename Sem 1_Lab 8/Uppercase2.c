#include <stdio.h>
#define MAX_STR_LEN 100

int main(void)
{
	char msg[MAX_STR_LEN +1] = "Make this string uppercase.";
	char ch;
	int i=0;
	ch = msg[0];
	
	printf("Original message: %s \n", msg);
	
	while (i<MAX_STR_LEN && msg[i]!='\0')
	{
		if((msg[i] >= 'a') && (msg[i]<= 'z'))
			msg[i] =msg[i] - 32;
			ch=msg[i++];
	}
	printf("The sentence in uppercase is: %s", msg);
	return 0;
}