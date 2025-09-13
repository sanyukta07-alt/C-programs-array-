//C program to implement LINEAR SEARCH

#include <stdio.h>

void display(int arr[], int size);
int linearSearch(int arr[], int size, int key);

int main(void)
{
	int my_array[] = {38, 27, 43, 3, 9, 82, 10};
	int key = 0;
	int size = sizeof(my_array) / sizeof(my_array[0]);
	
	printf("\nOriginal Array : ");
	display(my_array, size);
	
	printf("Enter element to be searched: ");
	scanf("%d", &key);
	
	printf("\n%d is found at index number = %d\n", key, linearSearch(my_array, size, key));
	
	return 0;
}

void display(int arr[], int size)
{
	int index = 0;
	
	for(index = 0; index < size; index++)
	printf("%d ", arr[index]);
	
	printf("\n");
}

int linearSearch(int arr[], int size, int key)
{
	int index = 0;
	int foundAt = 0;
	int flag = 0;
	
	for(index = 0; index < size; index++)
	{
		if(arr[index] == key)
		{
			foundAt = index;
			flag = 1;
			break;
		}
	}
	
	if(flag == 0)
	foundAt = -1;
	
	return foundAt;
}
