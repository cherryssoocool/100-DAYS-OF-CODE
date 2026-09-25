/*
 * Name :  Cherril
 * Roll : 590040896
 * Day : 16 Question: 1
 * Date : 25-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to take a number as input and print its equivalent
 * binary representation.
 */

#include <stdio.h>

int main() {
    int n, binary[32], i = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0");
        return 0;
    }

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    while (i > 0) {
        i--;
        printf("%d", binary[i]);
    }

    return 0;
}
