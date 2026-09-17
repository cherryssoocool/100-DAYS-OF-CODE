/*
 * Name :  Cherril
 * Roll : 590040896
 * Day : 02 Question: 1
 * Date : 18-09-2026
 *
 * PROBLEM STATEMENT:
 *  Q3: Write a program to calculate the area and perimeter
 * of a rectangle given its length and breadth.
*/
#include <stdio.h>

int main()
{
    float length, breadth, area, perimeter;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter breadth: ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f", perimeter);

    return 0;
}
