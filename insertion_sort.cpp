//INSERTION SORT

#include <stdio.h>

void insertionSort(int arr[], int size);
void display(int arr[], int size);

int main(void)
{
	int my_array[5] = {4, 1, 9, 3, 7};
	
	insertionSort(my_array, 5);
	printf("\nSorted Array = ");
	display(my_array, 5);
	
	return 0;
}

void insertionSort(int arr[], int size)
{
	int i, j = 0;
	int key = 0;
	
	for(i = 1; i < size; i++)
	{
		key= arr[i];
		j= i - 1;
		
		//move elements greater than key one position ahead (RIGHT SHIFT)
		while(j >= 0 && arr[j] > key)
		{
		   arr[j+1] = arr[j];
		   j = j - 1;
		}
		
		//insert key at the right place
		arr[j+1] = key;
	}
}

void display(int arr[], int size)
{
	int index = 0;
	
	for(index = 0; index < size; index++)
	printf("%d ", arr[index]);
	
  printf("\n");
}
