#include <stdio.h>
#include <conio.h>

int main() {
    int number, sum = 0, reverse = 0, product;
    int temp; 
    
    clrscr();
    printf("****************** Magical Number ******************\n");

    printf("\nEnter Any Number :- ");
    scanf("%d", &number);

    for (temp = number; temp != 0; temp /= 10) {
        sum += temp % 10;
    }

    for (temp = sum; temp != 0; temp /= 10) {
        reverse = reverse * 10 + temp % 10;
    }

    product = sum * reverse;

    if (product == number) {
        printf("%d is a magic number!\n", number);
    } else {
        printf("%d is not a magic number.\n", number);
    }

    getch();
    return 0;
}
