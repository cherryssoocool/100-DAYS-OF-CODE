/*
 * Name :  Cherril
 * Roll : 590040896
 * Day : 01 Question: 1
 * Date : 17-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to input two numbers and display their sum.
 */

#include <stdio.h>

int main()
{
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum = %d", sum);

    return 0;
}
