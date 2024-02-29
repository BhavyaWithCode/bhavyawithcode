#include<stdio.h>

void swap (int*a,int*b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

int main(){
    int num1,num2;
    printf("\n Swapping Programming with third variables:-");
    
    printf("\nEnter the number 1 :- ");
    scanf("%d",&num1);
    
    printf("\nEnter the number 2 :- ");
    scanf("%d",&num2);
    
    printf("\nBefore swapping a value was num1 =  %d num2 = %d\n",num1,num2);
    
    swap(&num1,&num2);
    
    printf("\nAfter swapping a value was num1 =  %d num2 = %d\n",num1,num2);
}