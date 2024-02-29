#include <stdio.h>
#include <conio.h>

int main() {
    int number, count;
    int i; 
    
    clrscr();
    printf("\nEnter Any Number :- ");
    scanf("%d", &number);

    count = 0; 
    for (i = number; i != 0; i /= 10) { 
        count++;
    }

    printf("The total number of digits :- %d\n", count);

    getch();
    return 0;
}
