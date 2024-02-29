#include<stdio.h>
#include<conio.h>
int main(){
    int Number,Sum=0;
    clrscr();
    printf("\nEnter any number :- ");
    scanf("%d",&Number);

    for (int i = 1; i <= Number; i++)
    {
        Sum+=i;
    }

    printf("The sum of the numbers from 1 to %d is : %d\n",Number,Sum);
    
    getch();
    return 0;
}