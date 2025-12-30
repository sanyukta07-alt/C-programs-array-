#include <stdio.h>

void main()
{
    int i, count=0, n;
    printf("Enter the limit: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
    scanf("%d", &arr[i]);

    while(n>=0)
    {
        if(arr[n-1]%2 == 0)
        count++;
        n--;
    }

    printf("No. of prime numbers in the array: %d", count);
}

