//C program to display the second largest element in an array (WITHOUT SORTING)

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int my_array[10] = {54, 12, 34, 89, 76, 90, 58, 31, 4, 70};
	int largest = -65535;
	int second_largest = -65535;
	int index = 0;
	
	//finding the largest element
	for(index = 0; index < 10; index++)
	{
		if(my_array[index] >= largest)
		largest = my_array[index];
	}
	
	//finding the second-largest element
	for(index = 0; index < 10; index++)
	{
		if(my_array[index] >= second_largest && my_array[index]!= largest)
		second_largest = my_array[index];
	}
	
	printf("\nSecond Largest Element = %d\n", second_largest);
	
	return 0;
}
