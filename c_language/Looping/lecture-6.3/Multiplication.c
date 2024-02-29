#include<stdio.h>
#include<conio.h>
int main(){
    int Number;
    clrscr();
    printf("\nEnter any Number :- ");
    scanf("%d",&Number);

    printf("Multiplication of table %d:\n",Number);

    for (int  i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n",Number,i,Number * i);
    }
    

    getch;
    return 0;
}