#include <stdio.h>
#include <conio.h>
int main()
{

    int firstNumber, secondNumber, thirdNumber, fourthNumber;
    clrscr();
    printf("\n************************************************************\n");
    printf("Enter The First Number  :- ");
    scanf("%d", &firstNumber);
    printf("Enter The Second Number :- ");
    scanf("%d", &secondNumber);
    printf("Enter The Third Number  :- ");
    scanf("%d", &thirdNumber);
    printf("Enter The Fourth Number :- ");
    scanf("%d", &fourthNumber);
    printf("************************************************************\n\n");

    printf("************************************************************\n");
    printf("*                     Output Of Maximum                     *\n");

    if (firstNumber > secondNumber) 
    {
        if (firstNumber > thirdNumber) 
        {
            if (firstNumber > fourthNumber) 
            {
                printf("%d Is The Maximum Number\n", firstNumber);
            }
            else 
            {
                printf("%d Is The Maximum Number\n", fourthNumber);
            }
        }
        else 
        {
            if (thirdNumber > fourthNumber) 
            {
                printf("%d Is The Maximum Number\n", thirdNumber);
            }
            else 
            {
                printf("%d Is The Maximum Number\n", fourthNumber);
            }
        }
    }
    else 
    {
        if (secondNumber > thirdNumber)  
        {
            if (secondNumber > fourthNumber) 
            {
                printf("%d Is The Maximum Number\n", secondNumber);
            }
            else 
            {
                printf("%d Is The Maximum Number\n", fourthNumber);
            }
        }
        else 
        {
            if (thirdNumber > fourthNumber) 
            {
                printf("%d Is The Maximum Number\n", thirdNumber);
            }
            else 
            {
                printf("%d Is The Maximum Number\n", fourthNumber);
            }
        }
    }
    printf("************************************************************\n");
    getch();
    return 0;
}
