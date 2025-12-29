#include <stdio.h>

int main(void)
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

    int max = arr[0];

    for (i = 1; i < n; i++)
    {
        if(arr[i] > max)
        max = arr[i];
    }

    printf("The maximum number from 1-d array: %d", max);
}


