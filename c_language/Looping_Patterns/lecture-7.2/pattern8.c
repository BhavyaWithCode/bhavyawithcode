#include <stdio.h>

int main() {
   
    int i,j,s; 
    for (i = 1; i <= 5; i++) 
	{
        
        for (s = 1; s<= 5 - i; s++) 
		{
            printf("  ");
        }

        
        for (j = 1; j <= i; j++) 
		{
            printf("%d ", j);
        }

        
        for (j = i - 1; j >= 1; j--) 
		{
            printf("%d ", j);
        }

        printf("\n");
    }

    
    for (i = 1; i <= 5; i++) 
	{
        
        for (s = 1; s <= i; s++) 
		{
            printf("  ");
        }

      
        for (j = 1; j <= 5 - i + 1; j++) 
		{
            printf("%d ", j);
        }

       
        for (j = 5 - i; j >= 1; j--) 
		{
            printf("%d ", j);
        }

        printf("\n");
    }
}

