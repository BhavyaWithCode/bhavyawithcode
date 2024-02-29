#include<stdio.h>

main()
{
	int size,i;
	
	printf("\nEnter the size of array :- ");
	scanf("%d",&size);
	
	int arrayA[size];
    int arrayB[size];
    int arrayC[size];
    
    printf("Enter an array A's Element :-\n");
    
    for(i = 0; i < size; i++)
    {
    	printf("a[%d] = ", i);
        scanf("%d", &arrayA[i]);
	}
	
	printf("Enter an array B's Element :-\n");
	
	for(i = 0; i < size; i++)
	{
		printf("b[%d] = ", i);
        scanf("%d", &arrayB[i]);
	}
	
	for(i = 0; i < size; i++)
	{
		arrayC[i] = arrayB[i] + arrayA[i];
	}
	
	printf("Array C is :- ");
	
	for(i = 0; i < size;  i++)
	{
		printf("%d",arrayC[i]);
		if(i < size -1)
		{
			printf(",");
		}
	}
	printf("\n");
	
}
