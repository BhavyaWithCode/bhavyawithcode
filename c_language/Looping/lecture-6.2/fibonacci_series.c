#include <stdio.h>

int main() {
    int N, first = 0, second = 1, next;

   
    printf("Enter the number of Fibonacci numbers to print: ");
    scanf("%d", &N);
        
    printf("\n===========================================\n");
    printf("    Fibonacci Series up to %d numbers\n", N);
    printf("===========================================\n\n");

        
    printf("%d, %d", first, second);
         
    for (int i = 2; i < N; ++i) {
        next = first + second;
        
        printf("%d", next);

        
        first = second;
        second = next;
    }

    
    printf("\n\n");

    return 0;
}
