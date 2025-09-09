//C program to separate odd and even integers into a separate array and display them.

#include <stdio.h>
#include <stdlib.h>

void array_display(int arr[], int size);

int main(void)
{
	int my_array[10] = {6, 2, 5, 4, 9, 1, 3, 8, 7, 10};
	int *even_array;
	int *odd_array;
	int c_odd = 0, c_even = 0;
	int index = 0, e_index= 0, o_index=0;
	
	//counting number of even and odd elements
	for(index = 0; index < 10; index++)
	{
		if(my_array[index] % 2 == 0)
		c_even++;
		else
		c_odd++;
	}
	
	//creating separate dynamic arrays for storing even and odd elements
	even_array = (int *)malloc(c_even * sizeof(int));
	odd_array = (int *)malloc(c_odd * sizeof(int));
	
	for(index = 0; index < 10; index++)
	{
		if(my_array[index] % 2 == 0)
		even_array[e_index++] = my_array[index];
		else
		odd_array[o_index++] = my_array[index];
	}
	
	//displaying the arrays
	printf("\nEven Array = ");
	array_display(even_array, c_even);
	printf("\nOdd Array = ");
	array_display(odd_array, c_odd);
	
	return 0;
}

void array_display(int arr[], int size)
{
	int index = 0;
	
	for(index = 0; index < size; index++)
	printf("%d ", arr[index]);
	
	printf("\n");
}
