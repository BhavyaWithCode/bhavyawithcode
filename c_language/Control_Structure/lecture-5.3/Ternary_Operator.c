#include<stdio.h>
#include<conio.h>
int main() {
    int FirstNumber, SecondNumber, ThirdNumber, FourthNumber;
    clrscr();
    printf("\n*********************** Minimum Finder By Ternary Operator  ***********************");

    printf("\nEnter an FirstNumber  :- ");
    scanf("%d", &FirstNumber);

    printf("\nEnter an SecondNumber :- ");
    scanf("%d", &SecondNumber);

    printf("\nEnter an ThirdNumber  :- ");
    scanf("%d", &ThirdNumber);

    printf("\nEnter an FourthNumber :- ");
    scanf("%d", &FourthNumber);

    printf("\nMinimum number is: %d\n", 
            (FirstNumber < SecondNumber) ? 
                ((FirstNumber < ThirdNumber) ? 
                    ((FirstNumber < FourthNumber) ? FirstNumber : FourthNumber) 
                    : ((ThirdNumber < FourthNumber) ? ThirdNumber : FourthNumber)) 
                : ((SecondNumber < ThirdNumber) ? 
                    ((SecondNumber < FourthNumber) ? SecondNumber : FourthNumber) 
                    : ((ThirdNumber < FourthNumber) ? ThirdNumber : FourthNumber)));
    getch();
    return 0;
}
