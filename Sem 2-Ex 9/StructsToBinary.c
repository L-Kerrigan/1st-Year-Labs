/* Exercise 9, Question 1
This is a program that creates 5 structs from an int array and writes each struct to a binary file. */

#include <stdio.h>

int myCustomers[5][2] = {{86956, 1}, {36568, 3}, {6565, 0}, {999555, 22}, {85446, 88}};

struct zip_custs{
	int zip_code;
	int customer_count;
};

int main(void)
{
	FILE *fPtr;

	if((fPtr = fopen("Customers.dat", "wb")) == NULL) //Checking if the file opens correctly to read from it. If it doesn't, tell the user and end the program
	{
		printf("File couldn't be opened.");
	}
	else{
		struct zip_custs customer={0,0};
		for(int i=0;i<5;i++)
		{ //Writing the columns of the array into the blank struct one at a time
			customer.zip_code=myCustomers[i][0];
			customer.customer_count=myCustomers[i][1];
			fwrite(&customer, sizeof(struct zip_custs), 1, fPtr); //Writing in the information from the struct to the binary file

			//fseek(fPtr, sizeof(struct customer), SEEK_SET);
			//fread(&customer, sizeof(struct zip_custs), 1, fPtr);
		}
	}
	fclose(fPtr); //Closing the file
}
