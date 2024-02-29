#include<stdio.h>

void swap(int* a, int* b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int num1, num2;
    printf("\nSwapping Program without using a third variable:\n");
    
    printf("\nEnter the number 1: ");
    scanf("%d", &num1);
    
    printf("\nEnter the number 2: ");
    scanf("%d", &num2);
    
    printf("\nBefore swapping, num1 = %d and num2 = %d\n", num1, num2);
    
    swap(&num1, &num2);
    
    printf("\nAfter swapping, num1 = %d and num2 = %d\n", num1, num2);
    
    return 0;
}
