// BUBBLE SORT

#include <stdio.h>

void bubbleSort(int arr[], int size);
void display(int arr[], int size);

int main(void)
{
	int my_array[5] = {4, 1, 9, 3, 7};
	
	bubbleSort(my_array, 5);
	printf("\nSorted Array = ");
	display(my_array, 5);
	
	return 0;
}

void bubbleSort(int arr[], int size)
{
	int i, j = 0;
	int temp = 0;
	
	for(i = 0; i< size-1; i++)
	{
		for(j = 0; j< (size-i-1); j++)
		{
			if(arr[j] > arr[j+1])
			{
				//swapping two elements without using third variable
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void display(int arr[], int size)
{
	int index = 0;
	
	for(index = 0; index < size; index++)
	printf("%d ", arr[index]);
	
  printf("\n");
}
