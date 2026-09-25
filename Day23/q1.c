/*
 * Name :  Cherril
 * Roll : 590040896
 * Day : 23 Question: 1
 * Date : 25-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to find the sum of the series:
 * 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
 */

#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (double)(2 * i) / (4 * i - 1);
    }

    printf("Approximate sum: %.2f", sum);

    return 0;
}
