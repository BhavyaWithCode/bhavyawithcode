#include<stdio.h>

int main(){
    printf("*******************\nWrite a program to find the minimum number from thr given 2 number using if else*******************");
    
    int FirstNumber,SecondNumber;
    printf("\nEnter the First Number  :  ");
    scanf("%d",&FirstNumber);

    printf("\nEnter the Second Number : ");
    scanf("%d",&SecondNumber);

    if (FirstNumber<SecondNumber)
    {
        printf("The minimum number is %d",FirstNumber);
    }
    else{
        printf("The minium number is %d",SecondNumber);
    }
    
    
}