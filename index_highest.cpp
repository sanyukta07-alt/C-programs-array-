//C program that accepts some integers from the user and finds the highest value and the input position

#include <stdio.h>

int main(void)
{
	int n, i;
	int highest, index = 0;
	
	printf("\nEnter the limit: ");
	scanf("%d", &n);
	
	int number[n];
	
	printf("Enter %d integers: \n", n);
	for(i = 0; i < n; i++)
	{
	  scanf("%d", &number[i]);	
	}

    highest = number[0];
    
    for(i = 1; i < n; i++)
    {
        if(number[i] > highest)
        {
            highest = number[i];
            index = i;
        }
    }

    printf("\nHighest value = %d", highest);
    printf("\nPosition = ");
	
	for(i = 0; i < n; i++)
    {
        if(number[i] == highest)
        {
            printf("%d ", i + 1);
        }
    } 

    return 0;
}
