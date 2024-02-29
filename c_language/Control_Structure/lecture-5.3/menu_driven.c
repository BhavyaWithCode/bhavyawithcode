#include <stdio.h>
#include<conio.h>
int main()
{
    int language, choice;
    clrscr();
    printf("\n******************** Telecom Call Service Conversations ********************\n");

    printf("\nPress 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n");
    printf("Enter your choice: ");
    scanf("%d", &language);

    switch (language)
    {
    case 1:
        printf("\nPress 1 for Internet Recharge\n");
        printf("Press 2 for Top-up Recharge\n");
        printf("Press 3 for Special Recharge\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nYou have successfully done Internet Recharge.\n");
            break;
        case 2:
            printf("\nYou have successfully done Top-up Recharge.\n");
            break;
        case 3:
            printf("\nYou have successfully done Special Recharge.\n");
            break;
        default:
            printf("\nInvalid choice!\n");
        }
        break;
    case 2:
        printf("\nInternet Recharge ke liye 1 dabaiye\n");
        printf("Top-up Recharge ke liye 2 dabaiye\n");
        printf("Special Recharge ke liye 3 dabaiye\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nAapne safaltapurvak Internet Recharge kar liya he.\n");
            break;
        case 2:
            printf("\nAapne safaltapurvak Top-up Recharge kiya hai.\n");
            break;
        case 3:
            printf("\nTame safaltapurvak Special Recharge karyu chhe.\n");
            break;
        default:
            printf("\nInvalid choice!\n");
        }
        break;
    case 3:
        printf("\nInternet Recharge mate 1 dabavo\n");
        printf("Top-up Recharge mate 2 dabavo\n");
        printf("Special Recharge mate 3 dabavo\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nAapne safaltapurvak Internet Recharge kar liya he.\n");
            break;
        case 2:
            printf("\nAapne safaltapurvak Top-up Recharge kiya hai.\n");
            break;
        case 3:
            printf("\nTame safaltapurvak Special Recharge karyu chhe.\n");
            break;
        default:
            printf("\nInvalid choice!\n");
        }
        break;
    default:
        printf("\nInvalid choice!\n");
    }
    getch();
    return 0;
}
