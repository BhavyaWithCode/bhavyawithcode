#include <stdio.h>
int main()
{
    int a, b, c;
    a = 25;
    b = 30;

    c = a + b;
    printf("Addition of %d and %d is %d\n", a, b, c);

    c = a - b;
    printf("Subtraction %d of %d is %d\n", a, b, c);

    c = a * b;
    printf("Multiplication %d of %d is %d\n", a, b, c);

    c = a / b;
    printf("Division %d of %d is %d\n", a, b, c);

    c = a % b;
    printf("Module %d of %d is %d\n", a, b, c);
}