/* Exercise 6, Question 1
This program is to copy a string into a new string using pointer notation.
Any consonants will be removed and the remaining letters will be converted to uppercase. */

#include <stdio.h>
#include <string.h>

//Initializing all functions
void printNewSlogan();
char toUppercase(char letter);

int main(void)
{
	char *slogan="Comp10120 is my favourite module"; //Initializing the slogan
	printNewSlogan(slogan); //Calling function to the main
}

void printNewSlogan(char *slogan)
{
	char newSlogan[strlen(slogan)]; //Array for the new slogan
	int i=0, j=0; //Counters

	printf("Original string: \n"); //Show the original string
	printf("%s\n", slogan);

	printf("The new string is: \n");
	//To remove all consonants and convert to uppercase
	while(slogan[i]!='\0')
	{
		if(slogan[i] = ' ' || (slogan[i] >= 48 && slogan[i] <= 57))
		{ //If there's a space or number, nothing needs to change. It's just added to the new string
			newSlogan[j] = (slogan[i]);
			j++;
		}
		else if(slogan[i] == 'a' || slogan[i] == 'b' || slogan[i] == 'i' || slogan[i] == 'o' || slogan[i] == 'u')
		{ //If there's a lowercase vowel, convert it using the toUppercase function, then add it to the new string
			newSlogan[j] = toUppercase(slogan[i]);
			j++;
		}
		else if(slogan[i] == 'A' || slogan[i] == 'E' || slogan[i] == 'I' || slogan[i] == 'O' || slogan[i] == 'U')
		{ //If it's already an uppercase vowel, just copy it across to the new string
			newSlogan[j] = (slogan[i]);
			j++;
		}
		i++;
	}
	newSlogan[j]= '\0';  //Adding a null terminator to the string whe it's finishes
	printf("%s", newSlogan); //Printing the new string
}

char toUppercase(char letter)
{ //A function to change any lowercase letters to uppercase
	letter =letter - 32;
	return letter;
}
