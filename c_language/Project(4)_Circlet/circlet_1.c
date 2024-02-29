#include<stdio.h>

main()
{
	int i,j;
	int num;
	
	for(i=1;i<=5;i++)
	{
		num = 41;
		for(j=1;j<=i;j++)
		{
			printf("%d ",num++);
		}
		printf("\n");
	}
}
