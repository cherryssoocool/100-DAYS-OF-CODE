/*
 * Name :  Cherril
 * Roll : 590040896
 * Day : 25 Question: 2
 * Date : 25-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to print the following pattern:
 * *****
 *  ****
 *   ***
 *    **
 *     *
 *
 * Note: Spaces indicate indentation.
 */

#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j < i; j++) {
            printf(" ");
        }

        for (j = i; j <= 5; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
