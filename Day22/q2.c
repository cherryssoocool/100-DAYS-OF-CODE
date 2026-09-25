/*
 * Name :  Cherril
 * Roll : 590040896
 * Day : 22 Question: 2
 * Date : 25-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to find the sum of the series:
 * 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
 */

#include <stdio.h>

int main() {
    int n, i;
    double sum = 1.0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        sum = sum + (double)(2 * i - 1) / (2 * i);
    }

    printf("Approximate sum: %.1f", sum);

    return 0;
}
