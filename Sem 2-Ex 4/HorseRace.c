/* Exercise 4, Question 2
This is a program is a race between 2 horses: Firefoot (F if it's in the lead) & Shadowfox (S if it's in the lead) */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function prototypes
void moveFirefoot(int *FirefootPtr);  //Function to move Firefoot along
void moveShadowfox(int *ShadowfoxPtr);  //Function to move Shadowfox along
void printCurrentPositions(unsigned int, unsigned int);

int main()
{
   srand(time(NULL));  //For randomising numbers

   int Firefoot  = 1; // Firefoot  current position
   int Shadowfox = 1; // Shadowfox current position
   int counter = 0; //Counter for the for loop controling the race.


   puts("The Race has started. \n");

   // loop through the progress on the track
   while (Firefoot  != 100 && Shadowfox != 100)
   {
	moveFirefoot(&Firefoot); //Calling the function to move Firefoot along the track
	moveShadowfox(&Shadowfox);  //Calling the function to move Shadowfox along the track
	printCurrentPositions(Firefoot, Shadowfox); //Calling the function to print where each horse is
	++counter;
   }

   // determine the winner and print message - one horse has passed the end as it is outside the loop.
   if (Firefoot > Shadowfox)   //If by the time the counter reaches 100, Firefoot is in the front, then print Firefoot wins
   {
      printf("Firefoot wins! Firefoot: %d  Shadowfox: %d \n", Firefoot, Shadowfox);
   }

   if (Firefoot < Shadowfox) //If by the time the counter reaches 100, Shadowfox is in the front, then print Shadowfox wins
   {
       printf("Shadowfox wins! Firefoot: %d  Shadowfox: %d \n", Firefoot, Shadowfox);
   }
   else if(Firefoot == Shadowfox)  //If by the time the counter reaches 100, they're at the same position, then print it's a tie
   {
      printf("It's a tie! \n");
   }

   printf("Iterations: %u \n", counter);
}


// progress for Shadowfox
void moveShadowfox(int *ShadowfoxPtr)
{
   // generate random number from 1-10
   int x=(rand() % 10);

   //Depending on what number is generated, the horse will go forward 3, 2 or 1 step(s), stay in the same place or go back 2 steps
   if (x >= 1 && x <= 5)
   {
      *ShadowfoxPtr += 2;
   }

   if (x == 6)
   {
	   *ShadowfoxPtr += 1;
   }

   if (x == 7)
   {
	   *ShadowfoxPtr += 3;
   }

   if (x == 8 && x == 9)
   {
	   *ShadowfoxPtr -= 2;
   }

   else if (x == 10)
   {
	   *ShadowfoxPtr = *ShadowfoxPtr;
   }
   // check boundaries

   if (*ShadowfoxPtr < 1) {
      *ShadowfoxPtr = 1;
   }
   if (*ShadowfoxPtr > 100) {
      *ShadowfoxPtr = 100;
   }
}

// progress for Firefoot
void moveFirefoot (int *FirefootPtr)
{
	int x=(rand() % 10);

   //Depending on what number is generated, the horse will go forward 3, 2 or 1 step(s), stay in the same place or go back 2 steps
   if (x >= 1 && x <= 5)
   {
      *FirefootPtr += 2;
   }

   if (x == 6)
   {
	   *FirefootPtr += 1;
   }

   if (x == 7)
   {
	   *FirefootPtr += 3;
   }

   if (x == 8 && x == 9)
   {
	   *FirefootPtr -= 2;
   }
   else if(x == 10)
   {
	   *FirefootPtr = *FirefootPtr;
   }

   if (*FirefootPtr < 1) {
      *FirefootPtr = 1;
   }
   if (*FirefootPtr > 100) {
      *FirefootPtr = 100;
   }
}

// display new position
void printCurrentPositions(unsigned int Firefoot, unsigned int Shadowfox)
{
   // loop through race
   for (unsigned int count = 1; count <= 100; ++count)
   {
      // this loop will print 100 characters at each run: either F,S,T or a space to
      //gives the user an idea of where the horse at every iteration

      if (count == Firefoot  && count == Shadowfox)  //If the 2 horses are at the same position, print that they're tied
      {
        printf("Tied. \n");
      }
      else if (count == Shadowfox) //This prints S if Shadowfox is in the lead
	  {
         printf("S");
      }
      else if (count == Firefoot ) //This prints F if Firefoot is in the lead
	  {
          printf("F");
      }
      else {
         printf(" "); //In the meantime, print "  "
      }
   }

   puts("");
}
