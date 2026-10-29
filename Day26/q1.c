/*
 * Name : Cherril
 * Roll : 590040896
 * Day  : 26 Question: 1
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to print the following pattern:
    5
   45
  345
 2345
12345
 */
#include <stdio.h>

int main() {
    int i, j, k;

    for (i = 1; i <= 5; i++) {
        for (k = 1; k <= 5 - i; k++)
            printf(" ");

        for (j = 6 - i; j <= 5; j++)
            printf("%d", j);

        printf("\n");
    }

    return 0;
}
