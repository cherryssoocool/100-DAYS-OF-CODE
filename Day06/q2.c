/*
 * Name :  Cherril
 * Roll : 590040896
 * Day : 06 Question: 2
 * Date : 18-09-2026
 *
 * PROBLEM STATEMENT:
 * Q12: Write a program to input an integer and check whether
 * it is positive, negative or zero using nested if-else.
 */
#include <stdio.h>

int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number >= 0)
    {
        if (number == 0)
        {
            printf("The number is zero.");
        }
        else
        {
            printf("The number is positive.");
        }
    }
    else
    {
        printf("The number is negative.");
    }

    return 0;
}
