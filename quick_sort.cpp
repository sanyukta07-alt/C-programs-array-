// QUICK SORT

#include <stdio.h>

int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
void swap(int *a, int *b);
void display(int arr[], int size);

int main(void)
{
	int my_array[5] = {4, 1, 9, 3, 7};
	
	quickSort(my_array, 0, 4);
	printf("\nSorted Array = ");
	display(my_array, 5);
	
	return 0;
}

int partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = low - 1;
	int j = 0;
	
	for(j = low; j < high; j++)
	{
		//checking if the current element is smaller that the pivot
		if(arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	//placing the pivot element in the correct position
	swap(&arr[i+1], &arr[high]);
	
	return (i+1);
}

void quickSort(int arr[], int low, int high)
{
	if(low < high)
	{
		//finding the partition index
		int pi = partition(arr, low, high);
		
		//recursively sort elements before and after partition
		quickSort(arr, low, pi-1); //for the LEFT SUBARRAY
		quickSort(arr, pi+1, high);
	}
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void display(int arr[], int size)
{
	int index = 0;
	
	for(index = 0; index < size; index++)
	printf("%d ", arr[index]);
	
  printf("\n");
}
