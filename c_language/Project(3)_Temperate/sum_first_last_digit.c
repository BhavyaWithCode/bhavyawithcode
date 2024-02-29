#include <stdio.h>
// #include <conio.h>

int main() {
    int Number, Sum;
    // clrscr();
    printf("Enter any Number: ");
    scanf("%d", &Number);

    int lastDigit = Number % 10;

    int firstDigit = Number; 
    while (firstDigit >= 10) {
        firstDigit /= 10; 
    }

    Sum = firstDigit + lastDigit;
    printf("The sum of the first and last digit: %d\n", Sum);

    // getch();
    return 0;
}
