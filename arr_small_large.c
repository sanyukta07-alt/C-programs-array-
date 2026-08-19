#include <stdio.h>

void main()
{
	int n,i, s=0, l=0;
	printf("Enter size: ");
	scanf("%d", &n);
	int arr[n];
	
	printf("Enter elements of the array: ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	s= arr[0];
	l= arr[0];
	for(i=0; i<n; i++)
	{
		if(arr[i]<s)
		{
			s=arr[i];
		}
		if(arr[i]>l)
		{
			l=arr[i];
		}
	}
	printf("Smallest is %d and largest is %d", s,l);
}
