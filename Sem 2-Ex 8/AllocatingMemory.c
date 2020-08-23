/* Exercise 8, Question 2
This program will prompt the user to enter the type and number of elements in an array, create sufficient memory to store,
ask the user to enter the values, calculate the average of these values then printing them. It will also offer the user the
opportunity to add more elements to the array and reallocate enough memory for these new elements then calculate the average again. */

#include <stdio.h>
#include <stdlib.h>

int calculateInt(int num);
float calculateFloat(int num);

int main(void)
{
	int a;
	printf("How many elements do you wish to enter? \n");
	scanf("%d", &a);

	char ans;
	printf("Which type of number do you wish to enter? Type f for float or i for integer. \n");
	scanf(" %c", &ans);

	if(ans=='f')
	{
		calculateFloat(a);
	}
	else if(ans=='i')
	{
		calculateInt(a);
	}
}

int calculateInt(int num)
{
	int *array;
	int i;
	int sum=0;

	array=(int*)calloc(num, sizeof(int));
	if(array==NULL)
	{
		printf("Memory not allocated. \n");
		return 0;
	}

	printf("Enter %d numbers. \n", num);
	for(i=0;i<num;i++)
	{
		scanf("%d", array+i);
		sum+=*(array+i);
	}

	printf("Average of the array is: %d\n", (sum/num));

	char answer;
	printf("Do you want to add more elements? Type Y or N. \n");
	scanf(" %c", &answer);

	if(answer=='Y')
	{
		int num2;
		printf("How many elements do you wish to enter in your new array? \n");
		scanf("%d", &num2);

		array=(int*)realloc(array, num2 * sizeof(int));
		if(array==NULL)
		{
			printf("Memory not allocated. \n");
			return 0;
		}

		int sum2=0;
		printf("Enter %d numbers for the new array. \n", num2);
		for(i=0;i<num2;i++)
		{
			scanf("%d", array+i);
			sum2+=*(array+i);
		}

		printf("Average of the new array is: %d\n", (sum2/num2));
	}
}






float calculateFloat(int num)
{
	float *array;
	int i;
	float sum=0;

	array=(float*)calloc(num, sizeof(float));
	if(array==NULL)
	{
		printf("Memory not allocated. \n");
		return 0;
	}

	printf("Enter %d numbers. \n", num);
	for(i=0;i<num;i++)
	{
		scanf("%f", array+i);
		sum+=*(array+i);
	}

	printf("Average of the array is: %.2f\n", (sum/num));

	char answer;
	printf("Do you want to add more elements? Type Y or N. \n");
	scanf(" %c", &answer);

	if(answer=='Y')
	{
		int num2;
		printf("How many elements do you wish to enter in your new array? \n");
		scanf("%d", &num2);

		array=(float*)realloc(array, num2 * sizeof(float));
		if(array==NULL)
		{
			printf("Memory not allocated. \n");
			return 0;
		}

		int sum2=0;
		printf("Enter %d numbers for the new array. \n", num2);
		for(i=0;i<num2;i++)
		{
			scanf("%f", array+i);
			sum2+=*(array+i);
		}

		printf("Average of the new array is: %.2f\n", (sum2/num2));
	}
}
