//C program to display a 2-D array 

#include <stdio.h>

int main(void)
{
	int row, col=0;
	int i, j=0;
	
	printf("\nEnter number of rows: ");
	scanf("%d", &row);
	printf("\nEnter number of columns: ");
	scanf("%d", &col);
	
	int my_matrix[row][col];
	
	printf("\nEnter %d elements of the matrix: \n", (row * col));
	for(i=0; i< row; i++)
	{
		for(j=0; j< col; j++)
		scanf("%d", &my_matrix[i][j]);
	}
	
	//displaying the input matrix
	printf("\nINPUT MATRIX: \n");
	for(i=0; i< row; i++)
	{
		for(j=0; j< col; j++)
		printf("%d ", my_matrix[i][j]);
		
		printf("\n");
	}
	
	printf("\n");
	return 0;
}
