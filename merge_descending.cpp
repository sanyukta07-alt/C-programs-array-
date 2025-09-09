//C program to merge two sorted arrays in descending order and display the same.

#include <stdio.h>
#include <stdlib.h>

void array_display(int arr[], int size);

int main(void)
{
	int my_array1[10];
	int my_array2[8];
	int arr1_index, arr2_index, m_index=0;
	int *merged_array;
	
	printf("\nEnter 10 elements of Array 1 in descending order: \n");
	for(arr1_index = 0; arr1_index < 10; arr1_index++)
	scanf("%d", &my_array1[arr1_index]);
	
	printf("\nEnter 8 elements of Array 2 in descending order: \n");
	for(arr2_index = 0; arr2_index < 8; arr2_index++)
	scanf("%d", &my_array2[arr2_index]);
	
	//merging procedure
	merged_array = (int *)malloc(18 * sizeof(int));
	arr1_index = 0;
	arr2_index = 0;
	m_index = 0;
	
	while(arr1_index<10 && arr2_index<8)
	{
		if(my_array1[arr1_index] >= my_array2[arr2_index])
		{
			merged_array[m_index] = my_array1[arr1_index];
			m_index++;
			arr1_index++;
		}
		
		else
		{
		   	merged_array[m_index] = my_array2[arr2_index];
			m_index++;
			arr2_index++;
		}
	}
	
	//assuming that the second array elements have been completely consumed
	while(arr1_index < 10)
	merged_array[m_index++]= my_array1[arr1_index++];
	
	//assuming that the first array elements have been completely consumed
	while(arr2_index < 8)
	merged_array[m_index++]= my_array2[arr2_index++];
	
	//displaying the merged array
	printf("\nMerged Array = ");
	array_display(merged_array, 18);
	
	return 0;
}

void array_display(int arr[], int size)
{
	int index=0;
	
	for(index=0; index < size; index++)
	printf("%d ", arr[index]);
	
	printf("\n");
}
