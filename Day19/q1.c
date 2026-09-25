/*
 * Name :  Cherril
 * Roll : 590040896
 * Day : 19 Question: 1
 * Date : 25-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to find the LCM of two numbers.
 */

#include <stdio.h>

int main() {
    int a, b, i, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        lcm = a;
    else
        lcm = b;

    while (1) {
        if (lcm % a == 0 && lcm % b == 0) {
            break;
        }
        lcm++;
    }

    printf("%d", lcm);

    return 0;
}
