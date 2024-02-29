#include <stdio.h>

main() {
    int i, j, s;
    int num = 5;

    for (i = 0; i < 5; i++) 
	{
        for (s = 0; s <= 5 - i - 1; s++) 
		{
            printf("  ");
        }
        for (j = 5 - i; j <= 5; j++) 
		{
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

