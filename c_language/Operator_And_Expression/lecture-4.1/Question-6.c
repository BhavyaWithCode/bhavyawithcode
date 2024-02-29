#include<stdio.h>

int main() {
    int x, y, z;

    printf("\nEnter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    printf("Enter the value of z: ");
    scanf("%d", &z);

    printf("\nThe result of (%d + %d + %d)^2 is: %d\n", x, y, z, (x + y + z) * (x + y + z));

    return 0;
}
