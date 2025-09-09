//C program to count the number of duplicate elements of an array. [USING HASHING TECHNIQUE]

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int my_array[10]={1, 2, 3, 45, 6, 3, 4, 2, 100, 45};
	int max= -65535;
	int index=0;
	int *hashed_array;
	int frequency=0;
	
	//Step1: finding the maximum element of the array
	for(index=0; index<10; index++)
	{
		if(my_array[index] >=max)
		max= my_array[index];
	}

    //Step2: allocate a dynamic integer array of size = one more than the maximum element of the original array
    hashed_array= (int *)malloc((max+1) * sizeof(int));
    
    //Step3: initialize all elements of the hashed_array to zero
    for(index=0; index<=max; index++)
    hashed_array[index]=0;
    
    //Step 4
    for(index=0; index<10; index++)
    hashed_array[my_array[index]]++;
    
    //displaying the hashed array
    printf("\nFrequency Array = ");
    for(index=0; index<=max; index++)
    printf("%d ", hashed_array[index]);
    
    printf("\n");
    
    //displaying the duplicate elements(if present)
    for(index=0; index<=max; index++)
    {
    	frequency= hashed_array[index];
    	if(frequency>1)
    	printf("%d ", index);
	}
	printf("\n");
	return 0;
}
