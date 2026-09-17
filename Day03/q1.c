/*
 * Name :  Cherril
 * Roll : 590040896
 * Day : 03 Question: 1
 * Date : 18-09-2026
 *
 * PROBLEM STATEMENT:
 * Q5: Write a program to convert temperature from Celsius to Fahrenheit.
*/
#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit = %.2f", fahrenheit);

    return 0;
}
