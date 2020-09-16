/* Exercise 3, Question 2
This program creates 2 two-dimensional arrays and fills them with random numbers between 100-1500 with no duplicates.
It will create new arrays for:
containing the products of the corresponding cells of arrays A and B,
containing the sum of the corresponding cells of arrays A and B,
containing the sum of the corresponding rows of arrays A and B,
containing the sum of the coresponding columns of arrays A and B.

And it will print the contents of A and B,
print the number of total numbers that occur in each array,
print "Wow" if the same number appears in the same cell in the 2 arrays. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	//Initialising all the arrays...
	int arrayA[20][20];
	int arrayB[20][20];
	int Product[20][20];
	int sumCells[20][20];

	int sumRowsA [20][20];
	int sumRowsB [20][20];
	int sumRowsAll [20][20];
	int columns, rows;
	int i, j; //Counters for loops
	srand(time(NULL));  //Function to randomise arrays

	printf("Please enter the number of rows you want in your arrays. \n");
	scanf("%d", &rows);  //Taking in the number of rows in both arrays A and B
	printf("Please enter the number of columns you want in your arrays. \n");
	scanf("%d", &columns); //Taking in the number of columns in both arrays A and B

	for(i=0;i<=rows;i++)  //For inputting random numbers into array A, then printing it
	{
		for(j=0;j<=columns;j++)
		{
			arrayA[i][j]=(rand() % 1400)+100;
		}
	}

	for(i=0;i<rows;++i)  //Printing array A
	{
		for(j=0;j<columns;++j)
		{
			printf("%d ", arrayA[i][j]);
		}
		printf("\n");
	}
	printf("There are %d numbers in array A.\n", columns*rows);	//Counting the number of numbers in array A
	printf("\n\n"); //Just spaces out the output to make it neater








	for(i=0;i<=rows;i++) //For inputting random numbers into array B, then printing it
	{
		for(j=0;j<=columns;j++)
		{
			arrayB[i][j]=(rand() % 1400)+100;
		}
	}

	for(i=0;i<rows;++i) //Printing array B
	{
		for(j=0;j<columns;++j)
		{
			printf("%d ", arrayB[i][j]);
		}
		printf("\n");
	}
	printf("There are %d numbers in array B.\n", columns*rows);  //Counting the number of numbers in array B
	printf("\n\n");
	/*for(i=0;i<rows;++i)
	{
		for(j=0;j<columns;++j)
		{
			printf("%d ", arrayProduct(arrayA[][], arrayB[][], columns, rows));
		}
		printf("\n");
	} */



	printf("The product of the corresponding cells in arrays A and B are: \n");
	for(i=0;i<=rows;i++) //Creating an array to hold the product of corresponding cells in A and B
	{
		for(j=0;j<=columns;j++)
		{
			Product[i][j]=(arrayA[i][j])*(arrayB[i][j]);
		}
	}

	for(i=0;i<rows;++i)
	{
		for(j=0;j<columns;++j)
		{
			printf("%d ", Product[i][j]);  //Printing the array of products of corresponding cells in arrays A and B
		}
		printf("\n");
	}
	printf("\n\n");



	printf("The sum of the corresponding cells in arrays A and B are: \n");
	for(i=0;i<=rows;i++)  //Creating an array to hold the sum of corresponding cells in A and B
	{
		for(j=0;j<=columns;j++)
		{
			sumCells[i][j]=(arrayA[i][j])+(arrayB[i][j]);
		}
	}

	for(i=0;i<rows;++i)
	{
		for(j=0;j<columns;++j)
		{
			printf("%d ", sumCells[i][j]);  //Printing the array of the sum of corresponding cells im arrays A and B
		}
		printf("\n");
	}
	printf("\n\n");


	/* Part 3 of Q2. Printing the sum of the rows of A, the sum of the rows of B,
	and then the sum of the rows of A and B. I struggled with this and didn't have enough time to figure it out. */


	int g, h;

	printf("The sum of the rows in array A: \n");
	for(g=0;g<=rows;g++)
	{
		for(h=0;h<=1;h++)
		{
			for(i=0;i<=rows;i++)
			{
				for(j=0;j<=columns;j++)
				{
					sumRowsA[g][h]+=arrayA[i][j];   //Making an array to hold the sum of each row in array A
				}
			}
		}
	}



	for(g=0;g<=rows;g++)
	{
		for(h=0;h<=1;h++)
		{
			for(i=0;i<=rows;i++)
			{
				for(j=0;j<=columns;j++)
				{
					sumRowsB[g][h]+=arrayB[i][j];  //Making an array to hold the sum of each row in array B
				}
			}
		}
	}

	for(i=0;i<rows;++i)
	{
		for(j=0;j<columns;++j)
		{
			printf("%d ", sumRowsA[i][j]);  //Printing out the array of the sum of the rows of array A, to check the output
		}
		printf("\n");
	}

	printf("\n\n");



	printf("The sum of the rows in array B: \n");
	for(i=0;i<rows;++i)
	{
		for(j=0;j<columns;++j)
		{
			printf("%d ", sumRowsB[i][j]);  //Printing out the array of the sum of the rows of array B, to check the output
		}
		printf("\n");
	}

	printf("\n\n");






	for(i=0;i<rows;++i)
	{
		for(j=0;j<columns;++j)
		{
			printf("%d ", sumRowsAll[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");



	printf("The sum of the corresponding rows in arrays A and B are: \n");  //As above, but this time the sum of rows in A and B
	for(i=0;i<=rows;i++)
	{
		for(j=0;j<=columns;j++)
		{
			sumRowsAll[i][j]=(sumRowsA[i][j])+(sumRowsB[i][j]);
		}
	}

	for(i=0;i<rows;++i)
	{
		for(j=0;j<columns;++j)
		{
			printf("%d ", sumRowsAll[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");

}
