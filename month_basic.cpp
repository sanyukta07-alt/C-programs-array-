//Write a C program that reads an integer between 1 and 12 and prints the month of the year in English.

#include <stdio.h>

int main(void)
{
	const char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	int num = 0;
	
	printf("Enter number from 1 - 12: ");
	scanf("%d", &num);
	
	if(num >= 1 && num <= 12)
		printf("Month of the year: %s", months[num-1]);

    else
    printf("Wrong input.");
    
    return 0;
}
