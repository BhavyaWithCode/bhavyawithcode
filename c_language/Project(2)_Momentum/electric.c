#include <stdio.h>

int main()
{
    int units;
    double bill = 0.0;

    printf("Enter the total number of units consumed: ");
    scanf("%d", &units);

    if (units <= 50)
    {
        bill = units * 0.50;
    }
    else if (units <= 150)
    {
        bill = 50 * 0.50 + (units - 50) * 0.75;
    }
    else if (units <= 250)
    {
        bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    }
    else
    {
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    bill *= 1.20;

    printf("\nElectricity bill = Rs. %.2lf\n", bill);

    printf("\n*********************************\n");
    printf("**** Thank you for conserving ****\n");
    printf("****    energy! Keep shining!  ****\n");
    printf("*********************************\n");
    
  
    return 0;
}


