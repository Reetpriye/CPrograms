// Any number of Star Pyramid using nested for loop
// Author: REET

#include <stdio.h>

int main()
{
	int i, j, n;
	printf("How many rows do you want for Pyramid?\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= 2 * n - 1; j++)
		{
			if (j >= n - (i - 1) && j <= n + (i - 1)) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}


/*
WARNING: Output may vary according to architecture type or input.
Output of the program : 
How many rows do you want for Pyramid?
4
   *   
  ***  
 ***** 
*******
*/