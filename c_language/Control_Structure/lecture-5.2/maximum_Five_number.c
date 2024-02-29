#include <stdio.h>
#include<conio.h>
int main()
{

    int firstNumber, secondNumber, thirdNumber, fourthNumber, fifthNumber;
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
    printf("Enter The Fifth Number  :- ");
    scanf("%d", &fifthNumber);
    printf("************************************************************\n\n");

    printf("************************************************************\n");
    printf("*                     Output Of Maximum                     *\n");

    if (firstNumber > secondNumber) 
    {
        if (firstNumber > thirdNumber) 
        {
            if (firstNumber > fourthNumber) 
            {
                if (firstNumber > fifthNumber) 
                {
                    printf("%d Is The Maximum Number\n", firstNumber);
                }
                else 
                {
                    printf("%d Is The Maximum Number\n", fifthNumber);
                }
            }
            else 
            {
                if (fourthNumber > fifthNumber) 
                {
                    printf("%d Is The Maximum Number\n", fourthNumber);
                }
                else 
                {
                    printf("%d Is The Maximum Number\n", fifthNumber);
                }
            }
        }
        else 
        {
            if (thirdNumber > fourthNumber) 
            {
                if (thirdNumber > fifthNumber) 
                {
                    printf("%d Is The Maximum Number\n", thirdNumber);
                }
                else 
                {
                    printf("%d Is The Maximum Number\n", fifthNumber);
                }
            }
            else 
            {
                if (fourthNumber > fifthNumber) 
                {
                    printf("%d Is The Maximum Number\n", fourthNumber);
                }
                else 
                {
                    printf("%d Is The Maximum Number\n", fifthNumber);
                }
            }
        }
    }
    else 
    {
        if (secondNumber > thirdNumber) 
        {
            if (secondNumber > fourthNumber) 
            {
                if (secondNumber > fifthNumber) 
                {
                    printf("%d Is The Maximum Number\n", secondNumber);
                }
                else 
                {
                    printf("%d Is The Maximum Number\n", fifthNumber);
                }
            }
            else 
            {
                if (fourthNumber > fifthNumber) 
                {
                    printf("%d Is The Maximum Number\n", fourthNumber);
                }
                else 
                {
                    printf("%d Is The Maximum Number\n", fifthNumber);
                }
            }
        }
        else 
        {
            if (thirdNumber > fourthNumber) 
            {
                if (thirdNumber > fifthNumber) 
                {
                    printf("%d Is The Maximum Number\n", thirdNumber);
                }
                else 
                {
                    printf("%d Is The Maximum Number\n", fifthNumber);
                }
            }
            else 
            {
                if (fourthNumber > fifthNumber) 
                {
                    printf("%d Is The Maximum Number\n", fourthNumber);
                }
                else 
                {
                    printf("%d Is The Maximum Number\n", fifthNumber);
                }
            }
        }
    }
    printf("************************************************************\n");
    getch();
    return 0;
}
