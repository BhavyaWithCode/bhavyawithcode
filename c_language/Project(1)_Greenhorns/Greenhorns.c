#include <stdio.h>

int main() {
    printf("*************************************************************\n");
    printf("*                        Welcome to the                      *\n");
    printf("*                    ~ Greenhorns Project ~                  *\n");
    printf("*************************************************************\n\n");
    printf("Q.1: Program to Convert Temperature from Celsius to Fahrenheit\n\n");

    // Variables for the first question
    float celsius, fahrenheit;

    // Input for the first question
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    // Temperature conversion
    fahrenheit = (celsius * 9 / 5) + 32;

    // Output for the first question
    printf("\nResult: %.2f°C is equal to %.2f°F\n\n", celsius, fahrenheit);

    // Variables and input for the second question
    float basic_salary, hra_percentage, da_percentage, ta_percentage, gross_salary;

    printf("*************************************************************\n");
    printf("*                   Gross Salary Calculation                 *\n");
    printf("*************************************************************\n\n");

    printf("Q.2: Program to find gross salary by adding %% of HRA, DA, and TA of user choice.\n");

    printf("Enter Basic Salary   : ");
    scanf("%f", &basic_salary);

    printf("Enter HRA percentage : ");
    scanf("%f", &hra_percentage);

    printf("Enter DA percentage  : ");
    scanf("%f", &da_percentage);

    printf("Enter TA percentage  : ");
    scanf("%f", &ta_percentage);

    // Calculating gross salary for the second question
    gross_salary = basic_salary + (basic_salary * hra_percentage / 100) + (basic_salary * da_percentage / 100) + (basic_salary * ta_percentage / 100);

    // Output for the second question
    printf("\n*****************************************************************\n");
    printf("*                      Gross Salary Result                      *\n");
    printf("*****************************************************************\n");
    printf("Basic Salary: %.2f\n", basic_salary);
    printf("HRA: %.2f%%\n", hra_percentage);
    printf("DA: %.2f%%\n", da_percentage);
    printf("TA: %.2f%%\n", ta_percentage);
    printf("Gross Salary: %.2f\n\n", gross_salary);

    // Variables and input for the third question
    float angle1, angle2, angle3;

    printf("*************************************************************\n");
    printf("*                 Triangle Angle Calculation                 *\n");
    printf("*************************************************************\n\n");

    printf("Q.3: Program to find the third angle of a triangle if two other angles are given.\n");

    printf("Enter The Value Of First Angle  :  ");
    scanf("%f", &angle1);

    printf("Enter The Value Of Second Angle :  ");
    scanf("%f", &angle2);

    // Calculating the third angle for the third question
    angle3 = 180 - angle1 - angle2;

    // Output for the third question
    printf("\nThe third angle of the triangle is: %.2f degrees\n", angle3);

    return 0;
}
