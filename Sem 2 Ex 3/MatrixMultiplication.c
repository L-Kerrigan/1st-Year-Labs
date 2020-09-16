/* Exercise 3, Question 3
This is a program to multiply 2 matrices (arrays) together using the rules of matrix multiplication. */

#include <stdio.h>

int main(void)
{
	int h, i , j , sum=0;  //Mainly counter variables, and one to help with the multiplication process
	int rowsA, rowsB, columnsA, columnsB;  //To hold the number of columns/rows in each matrix

	printf("What are the dimensions of matrix A? \n");
	scanf("%d%d", &rowsA, &columnsA);

	int matrixA[rowsA][columnsA];  //Initialising the first matrix only after retrieving the number of rows/columns

	printf("\nPlease fill in the values of matrix A. \n");  //Filling in the values of the first matrix
	for(i=0;i<rowsA;i++)
	{
		for(j=0;j<columnsA;j++)
		{
			scanf("%d", &matrixA[i][j]);
		}
	}
	printf("\n\n");

	printf("Matrix A is: \n");  //Just here to make sure the matrix came out the way it was meant to
	for(i=0;i<rowsA;i++)
		{
			for(j=0;j<columnsA;j++)
			{
				printf("%d\t", matrixA[i][j]);
			}
			printf("\n");
		}
		printf("\n\n"); //These are just added to space things out and make the result easier to read


	printf("\nWhat are the dimensions of matrix B? \n");
	scanf("%d%d", &rowsB, &columnsB);

	if (columnsA!=rowsB) //Checks if the matrices can be multiplied by making sure the number of columns in A = the number of rows in B
	{
		printf("These matrices can't be multiplied together. \n");
		return 0;  //Ends the program if the matrices can't be multiplied
	}
	else
	{
		int matrixB[rowsB][columnsB]; //Initialising the second matrix only after retrieving the number of rows/columns and confirming that multiplication is possible
		printf("\nPlease fill in the values of matrix B. \n");
		for(i=0;i<rowsB;i++)
		{
			for(j=0;j<columnsB;j++)
			{
				scanf("%d", &matrixB[i][j]);
			}
		}
		printf("\n\n"); //These are just added to space things out and make the result easier to read

		printf("Matrix B is: \n");  //Just here to make sure the matrix came out the way it was meant to
		for(i=0;i<rowsB;i++)
		{
			for(j=0;j<columnsB;j++)
			{
				printf("%d\t", matrixB[i][j]);
			}
			printf("\n");
		}
		printf("\n\n");


		int matrixProduct[rowsA][columnsB];
		for(i=0;i<=rowsA;i++)
		{
			for(j=0;j<columnsB;j++)
			{
				for(h=0;h<columnsA;h++)
				{
					sum=sum+(matrixA[i][h]*matrixB[h][j]);  //Sum holds the resulting multiplication of each cell
				}
				matrixProduct[i][j]=sum; //The result becomes the entry i,j of the final matrix
				sum =0; //Resetting the sum
			}
		}

		printf("The product of matrices A and B is: \n");
		for(i=0;i<rowsA;i++)
		{
			for(j=0;j<columnsB;j++)
			{  //Just printing the resulting matrix
				printf("%d\t", matrixProduct[i][j]);
			}
			printf("\n");
		}
		printf("\n\n");
	}
	return 0;
}
