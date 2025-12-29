#include <stdio.h>

void main()
{
    int n;
    printf("Enter the limit: ");
    scanf("%d", &n);

    int index, flag = 0, num, i, search;
    int arr[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
       scanf("%d", &arr[i]);
    }

    printf("Enter an element to be searched: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++)
    {
        if(arr[i] == search)
        {
            flag = 1;
            index = i;
            break;
        }
    }

    if(flag == 1)
    printf("Element found at position %d", (index+1));
    else
    printf("Element not found.");
}


