#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i = 1;
    clrscr();
    printf("*********************************\n");
    printf("* 🌟  Welcome to the Number Printer 🌟   *\n\n");
    printf("*********************************\n");

    printf("Please Enter An Number :- ");
    scanf("%d", &n);

    printf("\n");
    printf("🔢 Number from 1 to %d:\n", n);
    printf("*************************\n");

    while (i <= n)
    {
        printf("%d ", i);
        i++;
    }

    printf("\n*************************\n");

    printf("\n🚀 Printing completed successfully! Have a great day! 🚀\n");
 
    getch();
    return 0;
}