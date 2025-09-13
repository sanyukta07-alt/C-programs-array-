//C program to implement BINARY SEARCH

#include <stdio.h>

void display(int arr[], int size);
int binarySearch(int arr[], int size, int key);

int main(void)
{
	int my_array[] = {3, 9, 10, 27, 38, 43, 82};
	int key = 0;
	int size = sizeof(my_array) / sizeof(my_array[0]);
	
	printf("\nOriginal Array : ");
	display(my_array, size);
	
	printf("Enter element to be searched: ");
	scanf("%d", &key);
	
	printf("\n%d is found at index number = %d\n", key, binarySearch(my_array, size, key));
	
	return 0;
}

void display(int arr[], int size)
{
	int index = 0;
	
	for(index = 0; index < size; index++)
	printf("%d ", arr[index]);
	
	printf("\n");
}

int binarySearch(int arr[], int size, int key)
{
	int left = 0;
	int right = size - 1;
	int mid = 0;
	int foundAt = 0;
	int flag = 0;
	
	while(left <= right)
	{
		mid = left + (right - left)/2;
		
		//Case 1: Key element is equal to the middle element
		if(key == arr[mid])
		{
			foundAt = mid;
			flag = 1;
			break;
		}
		
		//Case 2: Key element is less than the middle element
		else if(key < arr[mid])
		right = mid - 1;
		
		//Case 3: Key element is greater than the middle element
		else
		left = mid + 1;
	}
	
	if(flag == 0)
	foundAt= -1;
	
	return foundAt;
}
