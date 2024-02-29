#include <stdio.h>
#include<conio.h>
int main()
{
    int n, i;
    clrscr();
    printf("*********************************\n");
    printf("* 🌟  Welcome to the Number Printer 🌟   *\n");
    printf("*********************************\n\n");

    printf("Please Enter A Number: ");
    scanf("%d", &n);

    printf("\n🔢 Numbers from %d to 1:\n", n);
    printf("*************************\n");

    i = n; 

    while (i >= 1)
    {
        printf("%d ", i);
        i--; 
    }

    printf("\n*************************\n");

    printf("\n🚀 Printing completed successfully! Have a great day! 🚀\n");

    getch();
    return 0;
}
