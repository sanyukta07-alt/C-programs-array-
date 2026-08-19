#include <stdio.h>

void main()
{
	int n,i, sec=0, l=0;
	printf("Enter size: ");
	scanf("%d", &n);
	int arr[n];
	
	printf("Enter elements of the array: ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	l= arr[0];
	sec=arr[0];
	
	for(i=0; i<n; i++)
	{
		if(arr[i]>l)
		{
			l=arr[i];
		}
		if(arr[i]>sec && arr[i]<l)
		{
			sec = arr[i];
		}
            
	}
	printf("Second largest is %d", sec);
}
