//C program to reveerse an array 

#include <stdio.h>

int main(void)
{
	int my_array[10]= {1, 2, 3, 45, 6, 5, 4, 78, 100, 205};
	int output_array[10];
	int index = 0;
	int r_index = 0;
	printf("\nArray Contents = ");
	
	//displaying the contents of the integer array in forward direction
	for(index = 0; index < 10; index++)
	printf("%d ", my_array[index]);
	printf("\n");
	
	//forming the output array (reverse array)
	for(index = 9, r_index = 0; index>=0; index--, r_index++)
	output_array[r_index]= my_array[index];
	
	//displaying the reversed array
	printf("\nReversed Array = ");
	for(index = 0; index < 10; index++)
	printf("%d ", output_array[index]);
	
	printf("\n");
	
	return 0;
}
