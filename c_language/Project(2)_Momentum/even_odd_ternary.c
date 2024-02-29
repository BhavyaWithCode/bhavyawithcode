#include <stdio.h>

int main()
{
    int num;
 
    printf("Enter an integer :- ");
    scanf("%d", &num);

    printf("%d is %s.\n", num, (num % 2 == 0) ? "even number" : "odd number");

    return 0;
}
