/* Exercise 6, Question 2
This program creates a file to store students' name and surname, student number, phone number, field of study and GPA. */
#include <stdio.h>
#include <string.h>
#define SIZE 30  //Setting a constant size for convenience

//Declaring functions
void insertData();
void printResults();

int main(void)
{
	insertData(); //Calling required functions to the main
	printResults();
	return 0;
}

void printResults()
{
	FILE *sfPtr; //Initializing the file pointer

	if((sfPtr = fopen("Students.txt", "r")) == NULL) //Checking if the file opens correctly to read from it. If it doesn't, tell the user and end the program
	{
		puts("File couldn't be opened.");
	}
	else{ //Initializing the arrays or variables to hold the information taken in from the file
		char name[SIZE];
		char surname[SIZE];
		long int stdNumber;
		int phoneNumber[SIZE];
		float GPA;
		char FOS[SIZE]; //FOS = Field of Study
		char grade[SIZE];

		printf("%-20s%-20s%-20s%-20s%-20s%-20s%-20s\n", "Name", "Surname", "Student Number", "Phone Number", "Course Title", "GPA", "Grade"); //Printing out a table of headers
		fscanf(sfPtr, "%29s %29s %ld %29s %29s %f", name, surname, &stdNumber, phoneNumber, FOS, &GPA); //Scanning in the student's information from the file

		while(!feof(sfPtr)){  //While the file has information that can be read, it will not stop looping
		//To check to see what award the student gets based on their GPA
			if(GPA>=3.68) //If it's 3.68 or over, they get a first class honours
			{
				strcpy(grade," 1st Class Honours");
			}
			else if(GPA<3.68 && GPA>=3.08) //If it's less than 3.68 but over 3.08 they get a second class honours grade 1
			{
				strcpy(grade," 2nd Class Honours Grade 1");
			}
			else if(GPA<3.08 && GPA>=2.48) //If it's less than 3.08 but over 2.48 they get a second class honours grade 2
			{
				strcpy(grade," 2nd Class Honours Grade 2");
			}
			else if(GPA<2.48 && GPA>=2) //If it's under 2.48 but over 2 they get a pass
			{
				strcpy(grade," Pass");
			}
			else{ //Anything lower is a fail
				strcpy(grade," Failed");
			}

			printf("%-20s%-20s%-20d%-20s%-20s%.2f%-20s\n", name, surname, stdNumber, phoneNumber, FOS, GPA, grade);  //Printing out the results
			fscanf(sfPtr, "%29s %29s %ld %29s %29s %f", name, surname, &stdNumber, phoneNumber, FOS, &GPA);  //Scanning in the next student's information from the file
		}
		fclose(sfPtr); //Closing the file
	}
}


void insertData()
{
	FILE *cfPtr; //Initializing the file pointer

	if((cfPtr = fopen("Students.txt", "w")) == NULL)  //Checking if the file opens correctly to write in. If it doesn't, tell the user and end the program
	{
		puts("File couldn't be opened.");
	}
	else{ //Intializing all the arrays and bvariables we need to hold the information to be entered into the file
		char name[SIZE];
		char surname[SIZE];
		long int stdNumber;
		int phoneNumber[SIZE];
		float GPA;
		char FOS[SIZE];

		puts("Enter the full name, student number, phone number, field of study and GPA of this student. ");
		puts("Enter Ctrl Z to end input. ");
		printf("%s", "? ");  //The question mark indicates that the program is expecting the next student's information

		scanf("%29s%29s%ld%29s%29s%f", name, surname, &stdNumber, phoneNumber, FOS, &GPA);  //Scanning in the information inserted by the user and putting it into the file

		while(!feof(stdin)) { //While the end of the file signal isn't given by the user, we repeat the process of taking in information
			fprintf(stdin, "%s %s %ld %s %s %.2f\n", name, surname, stdNumber, phoneNumber, FOS, GPA);
			printf("%s", "? ");

			scanf("%29s%29s%ld%29s%29s%f", name, surname, &stdNumber, phoneNumber, FOS, &GPA);
		}
		fclose(cfPtr); //Closing the file
	}
}
