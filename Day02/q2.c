/*
 * Name :  Cherril
 * Roll : 590040896
 * Day : 02 Question: 2
 * Date : 18-09-2026
 *
 * PROBLEM STATEMENT:
 *  Q4: Write a program to calculate the area and circumference
 * of a circle given its radius.
*/
#include <stdio.h>

int main()
{
    float radius, area, circumference;
    float pi = 3.14159;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f", circumference);

    return 0;
}
