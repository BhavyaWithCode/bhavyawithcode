#include<stdio.h>

int main(){
    printf("****\n Write a Program to find if a given number is neutral or not using a ladder if else****");

    int number;
    printf("\Enter the number : ");
    scanf("%d",number);

    if (number>0)
    {
        printf("The number is positive");
    }

    else if (number<0)
    {
        printf("The number is negative");
    }

    else{
        printf("The number is neutral");
    }
}