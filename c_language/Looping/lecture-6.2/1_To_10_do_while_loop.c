#include<stdio.h>
#include<conio.h>

int main(){
    int Number = 1;

    do
    {
        printf("%d",Number);
        Number++;
    } while (Number <= 10);

    printf("\n");

    getch();
    return 0;
}