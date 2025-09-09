//C program to perform MATRIX MULTIPLICATION using dynamic memory

#include <stdio.h>
#include <stdlib.h>

void matrix_multiplication(int **matrix1, int **matrix2, int r1, int r2, int c1,int c2);

int main(void)
{
	int i,j,k=0;
	int r1,r2,c1,c2=0;
	
	printf("\nEnter number of rows for Matrix 1: ");
	scanf("%d", &r1);
	printf("\nEnter number of columns for Matrix 1: ");
	scanf("%d", &c1);
	printf("\nEnter number of rows for Matrix 2: ");
	scanf("%d", &r2);
	printf("\nEnter number of columns for Matrix 2: ");
	scanf("%d", &c2);
	
	//checking if multiplication is possible
	if(c1!=r2)
	{
		printf("\nMatrix Multiplication is not possible");
		return 0;
	}
	
	//allocating memory for row pointers of both matrices
	int **matrix1= (int **)malloc(r1 * sizeof(int *));
	int **matrix2= (int **)malloc(r2 * sizeof(int *));
	
	//allocating memory for each row of both matrices
	for(i=0;i<r1;i++)
	matrix1[i]=(int *)malloc(c1 * sizeof(int));
	for(i=0;i<r2;i++)
	matrix2[i]=(int *)malloc(c2 * sizeof(int));
	
	//taking the elements of MATRIX 1
	printf("\nEnter %d elements of MATRIX 1: ", (r1 * c1));
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1; j++)
		scanf("%d", &matrix1[i][j]);
	}

    //taking the elements of MATRIX 2
	printf("\nEnter %d elements of MATRIX 2: ", (r2 * c2));
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2; j++)
		scanf("%d", &matrix2[i][j]);
	}
	
	//performing MATRIX MULTIPLICATION
	matrix_multiplication(matrix1, matrix2, r1, r2, c1, c2);
	
  return 0;
}

void matrix_multiplication(int **matrix1, int **matrix2, int m1, int m2, int n1, int n2)
{
	int i,j,k=0;
	int **multiplication_matrix= (int **)malloc(m1 * sizeof(int *));
	for(i=0; i<m1; i++ )
	multiplication_matrix[i]= (int*)malloc(n2 * sizeof(int));
	
	//initializing all elements of product matrix to 0
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n2;j++)
		multiplication_matrix[i][j]=0;
	}
	
	//performing MULTIPLICATION
	for(i=0;i<m1; i++)
	{
		for(j=0;j<n2; j++)
		{
			for(k=0;k<n1;k++)
			multiplication_matrix[i][j]+= matrix1[i][k] * matrix2[k][j];
		}
	}
	
	//displaying the product Matrix
	printf("\nPRODUCT MATRIX: \n");
	for(i=0;i<m1; i++)
	{
		for(j=0;j<n2; j++)
		printf("%d ", multiplication_matrix[i][j]);
	 
	 printf("\n");
	}
}
