/*Write a C program to display:
  a. Lower Triangular Elements
  b. Upper Triangular Elements
*/

#include <stdio.h>

int main(void)
{
	int my_matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int i, j = 0;
	
	//displaying all LOWER TRIANGULAR elements
	printf("\nLOWER TRIANGULAR element = ");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(i>j)
			printf("%d ", my_matrix[i][j]);
		}
	}
	
	//displaying all UPPER TRIANGULAR elements
	printf("\nUPPER TRIANGULAR elements = ");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(i<j)
			printf("%d ", my_matrix[i][j]);
		}
	}
	
	printf("\n");
	return 0;
}
