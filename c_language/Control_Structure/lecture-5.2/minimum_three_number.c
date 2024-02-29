#include <stdio.h>

int main()
{
    int FirstNumber, SecondNumber, ThreeNumber;

    printf("\n");
    printf("************************************************************\n");
    printf("\nEnter The First Number  :- ");
    scanf("%d", &FirstNumber);

    printf("\nEnter The Second Number :- ");
    scanf("%d", &SecondNumber);

    printf("\nEnter The Third Number  :- ");
    scanf("%d", &ThreeNumber);

        printf("************************************************************\n");
    printf("\n");

    printf("\n");
    printf("************************************************************\n");
    printf("*                     Output Of Maximum                     *\n");

    if (FirstNumber < SecondNumber)
    {
        if (FirstNumber < ThreeNumber)
        {
            printf("%d Is The Minimum Number\n", FirstNumber);
        }
        else
        {
            printf("%d Is The Minimum Number\n", ThreeNumber);
        }
    }
    else
    {
        printf("%d Is The Minimum Number\n", SecondNumber);
    }
    printf("************************************************************\n");
    return 0;
}
