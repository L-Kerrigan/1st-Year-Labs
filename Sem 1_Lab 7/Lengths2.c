#include <stdio.h>
int lengths[10000001];   //Having the definition out here stops the program from crashing

int main(void)
{
	int n;  /* The number of lengths */
	int x; /* The target length */
	int i;
	
	FILE *fp;
	
	fp = fopen("lengths_small.txt", "r");

	fscanf(fp, "%d", &x);
	fscanf(fp, "%d", &n);

	for (i=0;i<n;i++)
	{
		fscanf(fp, "%d", &lengths[i]);
	}
	
	fclose(fp);
	
	x = x * 10000000;
	int found = 0;
	int l = 0;
	int j = n-1;
	while (l != j && found == 0)
	{
		int sum = lengths[l] + lengths[j];
		if (sum > x)
		{
			j--;
		}
		else if (sum < x)
		{
			l++;
		}
		else if (sum == x)
		{
			printf("The lengths %d and %d equal %d .\n", lengths[l], lengths[j], x);
			found = 1;
		}
	}
	
	if (found == 0)
	{
		printf("There are no values that add up to %d . \n", x);
	}
	return 0;
}