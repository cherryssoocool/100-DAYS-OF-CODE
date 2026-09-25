/*
 * Name :  Cherril
 * Roll : 590040896
 * Day : 21 Question: 1
 * Date : 25-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to swap the first and last digit of a number.
 */

#include <stdio.h>

int main() {
    int n, first, last, digits = 1, temp, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 10) {
        printf("%d", n);
        return 0;
    }

    temp = n;

    last = n % 10;

    while (temp >= 10) {
        temp = temp / 10;
        digits = digits * 10;
    }

    first = temp;

    result = n % digits;
    result = result - last;
    result = result + first;
    result = result + (last - first) * digits;

    printf("%d", result);

    return 0;
}
