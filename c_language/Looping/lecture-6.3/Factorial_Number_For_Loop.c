#include <stdio.h>
#include <conio.h>
int main()
{
    int Number, Factorials = 1;
    clrscr();
    printf("\nEnter an Number :- ");
    scanf("%d", &Number);

    for (int i = 1; i <= Number; i++)
    {
        Factorials *= i;
    }

    printf("The Factorial of %d is : %d\n", Number, Factorials);

    getch();
    return 0;
}