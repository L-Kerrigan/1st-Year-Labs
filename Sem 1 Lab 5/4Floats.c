/* This is a program to read 4 floating point values x,y,w,z and rearrange
so w is the minimum value, x is the next smallest, y is the next smallest
and z contains the max value.
It's a messy layout, I know, but I had spent so much time on the others that
I decided to just hand this in. */

#include <stdio.h>

int main(void)
{
	int x, y, w, z;
	int t1, t2, t3;
	
	printf("Please enter the value of x. \n");
	scanf("%d", &x);
	printf("Thank you. \n");
	printf("Please enter the value of y. \n");
	scanf("%d", &y);
	printf("Thank you. \n");
	printf("Please enter the value of w. \n");
	scanf("%d", &w);
	printf("Thank you. \n");
	printf("Please enter the value of z. \n");
	scanf("%d", &z);
	printf("Thank you. \n");
	
		if (x > y && x > z && x > w)
		{
			t1 = x;
			x = z;
			z = t1;
			if (w > y && w > x)
			{
				t2 = w;
				w = y;
				y = t2;
				
				if (w > x)
				{
					t3 = w;
					w = x;
					x = t3;
				}
			}
			else if (x > y && x > w)
			{
				t2 = x;
				x = y;
				y = t2;
				
				if (w > x)
				{
					t3 = x;
					x = w;
					w = t3;
				}
			}
			else
			{
				if (w > x)
				{
					t3 = x;
					x = w;
					w = t3;
				}
			}
		}
		
		if (y > x && y > z && y > w)
		{
			t1 = y;
			y = z;
			z = t1;
			if (w > y && w > x)
			{
				t2 = w;
				w = y;
				y = t2;
				
				if (w > x)
				{
					t3 = w;
					w = x;
					x = t3;
				}
			}
			else if (x > y && x > w)
			{
				t2 = x;
				x = y;
				y = t2;
				
				if (w > x)
				{
					t3 = x;
					x = w;
					w = t3;
				}
			}
			else
			{
				if (w > x)
				{
					t3 = x;
					x = w;
					w = t3;
				}
			}
		}
		
		if (z > y && z > x && z > w)
		{
			if (w > y && w > x)
			{
				t2 = w;
				w = y;
				y = t2;
				
				if (w > x)
				{
					t3 = w;
					w = x;
					x = t3;
				}
			}
			else if (x > y && x > w)
			{
				t2 = x;
				x = y;
				y = t2;
				
				if (w > x)
				{
					t3 = x;
					x = w;
					w = t3;
				}
			}
			else
			{
				if (w > x)
				{
					t3 = x;
					x = w;
					w = t3;
				}
			}
		}
		
		if (w > y && w > z && w > x)
		{
			t1 = w;
			w = z;
			z = t1;
			if (w > y && w > x)
			{
				t2 = w;
				w = y;
				y = t2;
				
				if (w > x)
				{
					t3 = w;
					w = x;
					x = t3;
				}
			}
			else if (x > y && x > w)
			{
				t2 = x;
				x = y;
				y = t2;
				
				if (w > x)
				{
					t3 = x;
					x = w;
					w = t3;
				}
			}
			else
			{
				if (w > x)
				{
					t3 = x;
					x = w;
					w = t3;
				}
			}
		}
	
	printf("z = %d, y = %d, x = %d, w = %d \n", z, y, x, w);
	
	return 0;
}