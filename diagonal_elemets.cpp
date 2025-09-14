//C program to display all the elements of Primary and Secondary diagonal of a matrix

#include <stdio.h>

int main(void)
{
	int my_matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int i, j = 0;
	
	//displaying the PRIMARY DIAGONAL elements
	printf("\nPRIMARY DIAGONAL ELEMENTS = ");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(i == j)
			printf("%d ", my_matrix[i][j]);
		}
	}
	
	//displaying the SECONDARY DIAGONAL elements
	printf("\nSECONDARY DIAGONAL ELEMENTS = ");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if((i+j) == 2)
			printf("%d ", my_matrix[i][j]);
		}
	}
	
	printf("\n");
	return 0;
}
