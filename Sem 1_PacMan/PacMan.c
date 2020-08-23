/* Program to Implement Pac-man Destination Finder
Input: sx,sy, the x- and y-coordinate of the starting point
and dx, dy, the x- and y-coordinate of the destination.

Output: A set of Pac-man instructions, i.e. a sequence consisting of basic instructions either
Left meaning left turn, Right meaning right turn, or Walk. 
Originally written by Neil Hurley, re-written here by Lucy Kerrigan. */

#include <stdio.h>
void Go(int steps);
int main(void)
{
	int sx, sy, dx, dy;
	int diff_x, diff_y;
	
	sx = 2;
	sy = 6;
	dx = -4;
	dy = 3;
	
	diff_x = dx - sx;
	diff_y = dy - sy;
	
	if (diff_x >0 && diff_y >0)
	{
		printf("Right ");
		Go (diff_x);
		printf ("Right ");
		Go (diff_y);
	}
	
	if (diff_x >0 && diff_y <0)
	{
		printf("Right ");
		Go(diff_x);
		printf("Left ");
		Go(-diff_y);
	}
	
	if (diff_x <0 && diff_y >0)
	{
		printf("Left ");
		Go(-diff_x);
		printf("Left ");
		Go(diff_y);
	}
	
	if (diff_x <0 && diff_y <0)
	{
		printf("Left ");
		Go(-diff_x);
		printf("Right ");
		Go(-diff_y);
	}
	
	printf("\n");
	return 0;
}

void Go(int steps)
{
	int i;
	for (i=0;i<steps;i++)
	{
		printf("Walk ");
	}
}

