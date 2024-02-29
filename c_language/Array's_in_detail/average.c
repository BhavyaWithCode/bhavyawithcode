#include<stdio.h>

main()
{
	int size,i;
	
	printf("\nEnter the array size :- ");
	scanf("%d",&size);
	
	int array[size];
	
	for(i = 0 ; i < size; i++)
	{
		printf("a[%d] = ",i);
    	scanf("%d",&array[i]);
	}
	
	int sum = 0;
	
	for(i = 0 ; i < size ; i++)
	{
		sum+=array[i];
	}
	
	float average = (float) sum / size ;
	
	printf("Average of an array :- %.1f\n",average);
}
