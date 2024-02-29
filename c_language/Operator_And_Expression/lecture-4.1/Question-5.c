#include<stdio.h>

int main() {
    int x, y;

    printf("\nEnter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    printf("\nThe result of (%d + %d)^3 is: %d\n", x, y, (x + y) * (x + y) * (x + y));

    return 0;
}
