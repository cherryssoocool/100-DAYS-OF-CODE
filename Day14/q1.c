/*
 * Name :  Cherril
 * Roll : 590040896
 * Day : 14 Question: 1
 * Date : 25-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to print the sum of the first n odd numbers.
 */

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (2 * i - 1);
    }

    printf("%d", sum);

    return 0;
}
