//Write a C program to display the sum of all elements row-wise and column-wise

#include <stdio.h>

int main(void)
{
	int my_matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int i, j = 0;
	int r_total, c_total = 0;
	
	//displaying summation of elements row-wise
	for(i = 0; i < 3; i++)
	{
		r_total = 0;
		for(j = 0; j < 3; j++)
		r_total += my_matrix[i][j];
		
		printf("\nRow- %d Total = %d", (i+1), r_total);
	}
	
	//displaying summation of elements column-wise
	for(j = 0; j < 3; j++)
	{
		c_total = 0;
		for(i = 0; i < 3; i++)
		c_total += my_matrix[i][j];
		
		printf("\nColumn- %d Total = %d", (j+1), c_total);
	}
	
	printf("\n");
	return 0;
}
