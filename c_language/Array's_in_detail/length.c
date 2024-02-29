#include<stdio.h>

main()
{
	int array[7];

    int length , i;
    
    printf("\nEnter an array elements :- ");
    
    for(i = 0; i<7; i++)
    {
    	printf("a[%d] = ",i);
    	scanf("%d",&array[i]);
	}
	
	length = sizeof(array)/sizeof(array[0]);
	
	printf("Length of an array :- %d\n",length);
}
