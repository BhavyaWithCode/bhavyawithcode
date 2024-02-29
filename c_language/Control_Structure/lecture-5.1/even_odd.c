#include <stdio.h>

int main()
{
    printf("****\n  Write a Program to find the number is even or odd using if else****");

    int number;
    printf("\Enter the number : ");
    scanf("%d", number);

    if (number % 2 == 0)
    {
        printf("THE Number is even:");
    }else{
        printf("The Number is odd:");
    }
}