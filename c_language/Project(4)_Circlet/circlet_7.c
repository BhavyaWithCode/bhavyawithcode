
#include <stdio.h>

int main() {
    int r = 5;
    int c = 5;
    int i,j;

    for (i = 1; i <= r; i++) 
	{
        for (j = 1; j <= c; j++) 
		{
            if (i == 1 || i == 3 || j == 1 || j == c)
			{
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}



