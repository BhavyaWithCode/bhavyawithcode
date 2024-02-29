#include <stdio.h>

int main()
{
    float radius;
    float area;
    const float PI = 3.14;

    printf("Lets find area of circle\n");
    printf("Enter the value of radius:-");
    scanf("%f", &radius);

    area = PI * radius * radius;
    printf("The area of the circle is %f", area);
}