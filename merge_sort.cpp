//C program to implement MERGE SORT

#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int left, int mid, int right);
void mergeSort(int arr[], int left, int right);
void display(int arr[], int size);

int main(void)
{
	int my_array[] = {38, 27, 43, 3, 9, 82, 10};
	int size= sizeof(my_array)/sizeof(my_array[0]);
	
	printf("\nOriginal Array: ");
	display(my_array, size);
	
	mergeSort(my_array, 0, size - 1);
	
	printf("\nSorted Array: ");
	display(my_array, size);
	
	return 0;
}

void merge(int arr[], int left, int mid, int right)
{
	int i, j, k;
	int n1 = mid - left + 1;
	int n2 = right - mid;
	
	//creating two temporary arrays
	int *L= (int *)malloc(n1 * sizeof(int));
	int *R= (int *)malloc(n2 * sizeof(int));
	
	//copying the data to temporary arrays l[] and R[]
	for(i = 0; i < n1; i++)
	L[i] = arr[left + i];
	
	for(j = 0; j < n2; j++)
	R[j] = arr[mid +1 + j];
	
	//merging procedure
	i = 0;
	j = 0;
	k = left;
	
	while(i < n1 && j < n2)
	{
		if(L[i] <= R[j])
		arr[k] = L[i++];
		
		else
		arr[k] = R[j++];
		
		k++;
	}
	
	//copying the remaining elements (in case of different lengthed arrays/lists)
	//copying remaining elements of L[]
	while(i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}
}

void mergeSort(int arr[], int left, int right)
{
	int mid = 0;
	
	if(left < right)
	{
		mid = left + (right - left)/2;
		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);
		
		//merging the two sorted sub-arrays
		merge(arr, left, mid, right);
	}
}

void display(int arr[], int size)
{
	int index = 0;
	
	for(index = 0; index < size; index++)
	printf("%d ", arr[index]);
	
	printf("\n");
}

