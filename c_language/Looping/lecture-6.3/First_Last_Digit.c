#include<stdio.h>

int main(){
    int Number,Sum;

    printf("Enter any Number :- ");

    scanf("%d",&Number);

    Sum = Number % 10 + Number/10000;
    printf("The sum of the first and last digit : %d\n",Sum);

    return 0;
}