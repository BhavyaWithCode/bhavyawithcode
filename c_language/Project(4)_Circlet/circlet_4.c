#include <stdio.h>

main() {
    int i, j, s;
    int num = 5;

    for (i = 0; i < num; i++) 
	{
        for (s = 0; s < i * 2; s++) 
		{
             printf(" ");
        }
        for (j = i; j < num; j++) 
		{
            if (i % 2 == 0) 
			{
                printf("%d ", (j % 2 == 0) ? 1 : 0);
            } else 
			{
                printf("%d ", (j % 2 == 0) ? 0 : 1);
            }
        }
        printf("\n");
    }
}
