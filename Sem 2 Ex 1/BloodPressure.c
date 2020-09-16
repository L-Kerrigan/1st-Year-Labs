/* Exercise 1, Question 4
 This program tells if you have high blood pressure from the inputted systolic and diastolic pressure. */
#include <stdio.h>

int main(void)
{
	int sys, dia;  //Variables for systolic and diastolic pressure

	printf("Please enter your systolic pressure. \n");
	scanf("%d", &sys);
	printf("Please enter your diastolic pressure. \n");
	scanf("%d", &dia);  //Retrieving input from user

	if(sys<140 && dia>=90 || sys>=140 && dia<90 || sys>=140 && dia>=90) //If systolic pressure is at 140 or more, it counts as high blood pressure & same for diastolic at 90 or more.
	{
		printf("You have high blood pressure. \n");
	}
	else if(sys<120 && dia>=80 || sys>=120 && dia<80 || sys>=120 && dia>=80)  //If systolic pressure is between 120 and 139, it counts as pre-high blood pressure & same for diastolic from 80 to 89.
	{
		printf("You have pre-high blood pressure. \n");
	}
	else if(sys<90 && dia>=60 || sys>=90 && dia<60 || sys>=90 && dia>=60)  //If systolic pressure is between 90 and 119, it counts as ideal blood pressure & same for diastolic from 60 to 79.
	{
		printf("You have ideal blood pressure. \n");
	}
	else if(sys<90 && dia<60)
	{
		printf("You have low blood pressure. \n");  //If systolic pressure is less than 90, it counts as low blood pressure & same for diastolic less than 60.
	}
}
