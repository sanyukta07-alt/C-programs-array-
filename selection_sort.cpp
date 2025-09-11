// SELECTION SORT

#include <stdio.h>

void selectionSort(int arr[], int size);
void display(int arr[], int size);

int main(void)
{
	int my_array[5] = {4, 1, 9, 3, 7};
	
	selectionSort(my_array, 5);
	printf("\nSorted Array = ");
	display(my_array, 5);
	
	return 0;
}

void selectionSort(int arr[], int size)
{
	int i, j = 0;
	int minIndex, temp = 0;
	
	for(i = 0; i< size-1; i++)
	{
		//assuming that the very first index of the array contains the minimum element
		minIndex=i;
		
		//find the minimum element from the rest of the array arr[i+1, size -1]
		for(j = i + 1; j < size; j++)
		{
			if(arr[j] < arr[minIndex])
			  minIndex = j;
				
		}
		
		//swap the found minimum with the first element
		temp = arr[minIndex];
		arr[minIndex] = arr[i];
		arr[i] = temp;
	}
}

void display(int arr[], int size)
{
	int index = 0;
	
	for(index = 0; index < size; index++)
	printf("%d ", arr[index]);
	
  printf("\n");
}
