#include <stdio.h>

void main()
{
    int n, index, ele, i;
    printf("Enter the limit: ");
    scanf("%d", &n);
    printf("Enter the location to delete an element: ");
    scanf("%d", &index);
    int arr[n];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
    scanf("%d", &arr[i]);

    if(index < 1 || index > n)
    {
    printf("Invalid position.\n");
    return 0;
    }

    for(i = index-1; i < n - 1; i++)
    {
        arr[i]= arr[i + 1];
    }

    printf("Final array: ");
    for (i = 0; i < n-1; i++)
    printf("%d ", arr[i]);
}


