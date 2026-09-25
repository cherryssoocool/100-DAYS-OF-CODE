/*
 * Name :  Cherril
 * Roll : 590040896
 * Day : 15 Question: 2
 * Date : 25-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to reverse a given number.
 */

#include <stdio.h>

int main() {
    int n, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    printf("%d", reverse);

    return 0;
}
