/* Exercise 6, Question 3
This program makes a record of games that have been borrowed, including information like the title, the platform,
the developer, the year, who the game has been borrowed by and when. */
#include <stdio.h>
#define SIZE 35  //Predefining the size for arrays for convenience

void insertData();
void readData();

struct gameBorrow{ //Initializing the struct "gameBorrow" to hold the information about each borrowed game
	int Number;
	char title[SIZE];
	char platform[SIZE];
	char developer[SIZE];
	int year;
	char borrowedBy[SIZE];
	int dateBorrowed[SIZE];
} ;

int main(void)
{
	insertData();
	readData();
}

void insertData()
{
	FILE *cfPtr; //Initializing file pointer

	if((cfPtr = fopen("GameRecord.dat", "wb")) == NULL)  //Checks if the file opens correctly to write in it. If it doesn't then tell the user and close the program
	{
		puts("File couldn't be opened.");
	}

	else{
		struct gameBorrow game = {0, "", "", "", 0, "", 0}; //Initializing the blank game for the struct we created

		printf("%s", "Enter the game number. Enter 0 to end input. \n");
		scanf("%d", &game.Number);  //Taking in the number of the game which is about to be inserted

		while(game.Number!=0)
		{
			printf("%s", "\nEnter the game title, its platform, the developer and the year it was made. \n");
			fscanf(stdin, "%29s%29s%29s%d", game.title, game.platform, game.developer, &game.year);  //Taking in the game's title, platform, developer and the year it was made

			printf("%s", "\nEnter who it was borrowed by and when. \n");
			fscanf(stdin, "%29%29", game.borrowedBy, game.dateBorrowed); //Taing in who the game was borrowed by and when

			fseek(cfPtr, (game.Number-1)*sizeof(struct gameBorrow), SEEK_SET);  //Finding the appropriate place in the file to store this information using the game number
			fwrite(&game, sizeof(struct gameBorrow), 1, cfPtr); //Making the space to write the information depending on the size of the struct

			printf("\nEnter the game number. Enter 0 to end the input. \n");
			scanf(" %d", &game.Number); //Asks for the next game number
		}
	fclose(cfPtr); //Closing the file
	}
}

void readData()
{
	FILE *sfPtr; //Initializing file pointer

	if((sfPtr = fopen("GameRecord.dat", "rb")) == NULL)  //Checks if the file opens correctly to write in it. If it doesn't then tell the user and close the program
	{
		puts("File couldn't be opened.");
	}

	else{
		printf("%-20s%-20s%-20s%-20d%-20s%s\n", "Title", "Platform", "Developer", "Year Released", "Borrowed By", "Date Borrowed"); //Printing out a table of headers

		while(!feof(sfPtr))
		{ //While the file has information that can be read, it will not stop looping
			struct gameBorrow game = {0, "", "", "", 0, "", 0}; //Initializing the blank game for the struct we created

			int result = fread(&game, sizeof(struct gameBorrow), 1, sfPtr);

			if(result!=0 && game.Number!=0)  //if the result and account number aren't at 0, then keep going
			{
				printf("%-20s%-20s%-20s%-20d%-20s%-20s\n", game.title, game.platform, game.developer, game.year, game.borrowedBy, game.dateBorrowed);  //Printing out the results
			}
		}

		fclose(sfPtr); //Closing the file
	}
}
