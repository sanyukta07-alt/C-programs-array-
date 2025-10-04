/* Write a C program to read an array of length 6, change the first element
by the last, the second element by the fifth and the third element by the
fourth. Print the elements of the modified array. */

#include <stdio.h>

void swap(int *a, int *b);
void display(int *arr, int size);

int main() {
    int my_array[6] = {1,2,3,4,5,6};
    int i, j = 0;
    
    printf("\nOriginal Array: ");
    display(my_array, 6);
    
    for(i=0,j=5; i<=5; i++,j--)
    {
        if(i < j)
            swap(&my_array[i], &my_array[j]);
        
        else
            break;
    }
    
    printf("Modified Array: ");
    display(my_array, 6);

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void display(int *arr, int size)
{
    int index = 0;
    
    for(index=0; index<size; index++)
        printf("%d ", arr[index]);
        
    printf("\n");
}
