
#include <stdio.h>
#include<conio.h>
int main() {
    int startYear, endYear;
    clrscr();
    printf("📅 Enter the start year: ");
    scanf("%d", &startYear);
    
    printf("📅 Enter the end year: ");
    scanf("%d", &endYear);
    
    printf("\n🔢 Leap years between %d and %d:\n", startYear, endYear);
    printf("*************************\n");
    
    int year = startYear;
    
    while (year <= endYear) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("║ %d ", year);
            if (year % 5 == 0) {
                printf("║\n");
            }
        }
        year++;
    }
    
    printf("║\n");
    printf("*************************\n");
    
    printf("\n🚀 Printing completed successfully! Have a great day! 🚀\n");
    getch();
    return 0;
}
