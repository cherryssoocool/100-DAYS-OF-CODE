/*
 * Name :  Cherril
 * Roll : 590040896
 * Day : 17 Question: 1
 * Date : 25-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to check if a number is an Armstrong number.
 */

#include <stdio.h>

int main() {
    int n, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }

    if (original == sum) {
        printf("Armstrong");
    }
    else {
        printf("Not Armstrong");
    }

    return 0;
}
