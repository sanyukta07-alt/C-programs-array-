//C program to perform MATRIX ADDITION using dynamic memory

#include <stdio.h>
#include <stdlib.h>

void matrix_addition(int **matrix1, int **matrix2, int m, int n);

int main(void)
{
	int i,j=0;
	int rows, cols=0;
	
	printf("\nEnter number of rows: ");
	scanf("%d", &rows);
	printf("\nEnter number of columns: ");
	scanf("%d", &cols);
	
	//allocating memory for row pointers of both matrices
	int **matrix1= (int **)malloc(rows * sizeof(int *));
	int **matrix2= (int **)malloc(rows * sizeof(int *));
	
	//allocating memory for each row of both matrices
	for(i = 0; i < rows; i++)
	matrix1[i]=(int *)malloc(cols * sizeof(int));
	
	for(i = 0; i < rows; i++)
	matrix2[i]=(int *)malloc(cols * sizeof(int));
	
	//taking the elements of MATRIX 1
	printf("\nEnter %d elements of MATRIX 1: ", (rows * cols));
	for(i = 0;i < rows; i++)
	{
		for(j = 0;j < cols; j++)
		scanf("%d", &matrix1[i][j]);
	}

    //taking the elements of MATRIX 2
	printf("\nEnter %d elements of MATRIX 2: ", (rows * cols));
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < cols; j++)
		scanf("%d", &matrix2[i][j]);
	}
	
	//performing MATRIX MULTIPLICATION
	matrix_addition(matrix1, matrix2, rows, cols);
	
  return 0;
}

void matrix_addition(int **matrix1, int **matrix2, int m, int n)
{
	int i,j = 0;
	int **summation_matrix= (int **)malloc(m * sizeof(int *));
	
	for(i = 0; i < m; i++ )
	summation_matrix[i]= (int*)malloc(n * sizeof(int));
	
	//performing ADDITION
	for(i = 0;i < m; i++)
	{
		for(j = 0; j < n; j++)
		summation_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
	}
	
	//displaying the summation Matrix
	printf("\nPRODUCT MATRIX: \n");
	for(i = 0; i < m; i++)
	{
		for(j = 0;j < n; j++)
		printf("%d ", summation_matrix[i][j]);
	 
	 printf("\n");
	}
}
