/*
 * Name :  Cherril
 * Roll : 590040896
 * Day : 25 Question: 1
 * Date : 25-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to print the following pattern:
 * 5
 * 45
 * 345
 * 2345
 * 12345
 */

#include <stdio.h>

int main() {
    int i, j;

    for (i = 5; i >= 1; i--) {
        for (j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
