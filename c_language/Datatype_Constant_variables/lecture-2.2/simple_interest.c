#include<stdio.h>

int main(){
    float p;
    float r;
    float t;
    float interest;
    
    printf("Lets find simple interest\n");
    printf("Enter the value of p:-");
    scanf("%f",&p);
    
    printf("Enter the value of r:-");
    scanf("%f",&r);
    
    printf("Enter the value of t:-");
    scanf("%f",&t);
    
    
    interest = (p * r * t)/100 ;
    printf("The simple interest is %f",interest);
}