#include<stdio.h>

int main(){
    float base;
    float height;
    float area;
    
    printf("Lets find area of triangle\n");
    printf("Enter the value of base:-");
    scanf("%f",&base);
    
    printf("Enter the value of height:-");
    scanf("%f",&height);
    area = (base*height)/2;
    printf("The area of the triangle is %f",area);
}