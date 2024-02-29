#include <stdio.h>

int main() {
    int i, j, s;
    int num = 5;

    for (i = 0; i < num; i++) 
	{
        
        for (s = 0; s < (num - i - 1) * 3; s++) 
		{
            printf(" ");
        }

      
        for (j = num - i; j <= num; j++) 
		{
            printf("%d", j);
            if (j < num) printf("  "); 
        }

        
        for (j = num - 1; j >= num - i; j--) 
		{
            if (j != num) printf("  "); 
            printf("%d", j);
        }

        printf("\n");
    }
}

