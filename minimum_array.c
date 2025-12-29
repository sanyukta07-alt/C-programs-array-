#include <stdio.h>

void main()
{
    int n;
    printf("enter the limit: ");
    scanf("%d", &n);

    int arr[n];
    int i;

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
       scanf("%d", &arr[i]);
    }

    int min = arr[0];

    for (i = 1; i < n; i++)
    {
        if(arr[i] < min)
        min = arr[i];
    }

    printf("The minimum number from 1-d array: %d", min);
}


