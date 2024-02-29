#include<stdio.h>

int main(){
    int Number;

    printf("\nEnter an number :- ");
    scanf("%d",&Number);

    printf("CountDown from %d:\n",Number);

    while (Number>=1)
    {
        printf("%d\n", Number);
        Number--;
    }

    return 0;
    
}