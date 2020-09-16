#include <stdio.h>

int main(void)
{
	float euro, sterling;
	float convert(float euro);
	
	printf("Please the amount of euro you wish to convert. \n");
	scanf("%f", &euro);
	printf("Thank you! \n\n");
	
	float convert(float euro);
	printf("The equivalent amount of sterling is: %.2f\n", convert(euro));
	return 0;
}

float convert(float euro)
{
	float sterling;
	sterling=euro*0.8;
	
	return sterling;
}