/*
 * Name :  Cherril
 * Roll : 590040896
 * Day : 17 Question: 2
 * Date : 25-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to check if a number is prime.
 */

#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0;
    }
    else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("Prime");
    }
    else {
        printf("Not prime");
    }

    return 0;
}
