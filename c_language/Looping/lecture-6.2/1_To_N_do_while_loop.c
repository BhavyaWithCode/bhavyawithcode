#include <stdio.h>
#include<conio.h>
int main()
{

    printf("==============================================\n");
    printf("||     Welcome to Even Number Printer!       ||\n");
    printf("==============================================\n\n");

    int N;

    printf("Enter the upper limit (N): ");
    scanf("%d", &N);

    printf("\n==============================================\n");
    printf("||        Even numbers from 1 to %2d          ||\n", N);
    printf("==============================================\n");

    int i = 1;

    do
    {
        if (i % 2 == 0)
        {
            printf("%-4d", i);
        }

        i++;
    } while (i <= N);

    printf("\n==============================================\n\n");

    getch();
    return 0;
}
