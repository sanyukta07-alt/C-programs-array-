//C program to calculate and display the sum of elements of a given array

#include <stdio.h>

int main(void)
{
	int my_array[10]= {1, 2, 3, 45, 6, 5, 4, 78, 100, 205};
	int index = 0;
	int total = 0;
	
	printf("\nArray Contents = ");
	
	//displaying the contents of the integer array in forward direction
	for(index = 0; index < 10; index++)
	printf("%d ", my_array[index]);
	printf("\n");
	
	for(index = 0; index < 10; index++)
	total = total + my_array[index];
	
	printf("Summation of Array Elements = %d\n", total);
	
	return 0;
}
