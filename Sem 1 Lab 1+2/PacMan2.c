/* Program to Implement Pac-man Destination Finder
Input: sx,sy, the x- and y-coordinate of the starting point
and dx, dy, the x- and y-coordinate of the destination.

Output: A set of Pac-man instructions, i.e. a sequence consisting of basic instructions either
Left meaning left turn, Right meaning right turn, or Walk. 
This is for Part 3 of the Lab Work (Up/Down). */

#include <stdio.h>
void Go(int steps);
int main(void)
{
	int sx, sy, dx, dy;
	int diff_x, diff_y;
	
	sx = 2;
	sy = 3;
	dx = 9;
	dy = 8;
	
	diff_x = dx - sx;
	diff_y = dy - sy;
	
	if (dy>sy)
	{
		printf("Face up, ");
	}
	
	if (dy<sy)
	{
		printf("Face down, ");
	}
	
	
	if (diff_x >0 && diff_y >0)
	{
		Go (diff_y);
		printf("Turn right, ");
		Go (diff_x);
	}
	
	if (diff_x >0 && diff_y <0)
	{
		Go(-diff_y);
		printf("Turn left, ");
		Go(diff_x);
	}
	
	if (diff_x <0 && diff_y >0)
	{
		Go(diff_y);
		printf("Turn left, ");
		Go(-diff_x);
	}

	if (diff_x <0 && diff_y <0)
	{
		Go(-diff_y);
		printf("Turn right, ");
		Go(-diff_x);
	}
	
	printf("\n");
	return 0;
}

void Go(int steps)
{
	int i;
	for (i=0;i<steps;i++)
	{
		printf("Walk, ");
	}
}

