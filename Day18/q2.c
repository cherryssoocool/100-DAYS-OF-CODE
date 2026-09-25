/*
 * Name :  Cherril
 * Roll : 590040896
 * Day : 18 Question: 2
 * Date : 25-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to find the HCF (GCD) of two numbers.
 */

#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("%d", a);

    return 0;
}
