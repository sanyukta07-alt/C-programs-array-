//C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.

#include <stdio.h>

int main() 
{
    int i, amount = 0;
    int notes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int counter[10] = {0}; 

    printf("Enter the amount: ");
    scanf("%d", &amount);

    for(i = 0; i < 10; i++) 
	{
        if(amount >= notes[i]) 
		{
            counter[i] = amount / notes[i];
            amount%= notes[i];
        }
    }

    printf("\nSmallest possible number of bank notes:\n");
    for(i = 0; i < 10; i++) 
	{
        if(counter[i] != 0) 
            printf("%d x %d\n", notes[i], counter[i]);
    }

    return 0;
}

