/*
 * Name :  Cherril
 * Roll : 590040896
 * Day : 15 Question: 1
 * Date : 25-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to calculate the factorial of a number.
 */

#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    printf("%lld", factorial);

    return 0;
}
