/*
 * Name : Cherril
 * Roll : 590040896
 * Day  : 29 Question: 1
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Find the sum of array elements.
 */
#include <stdio.h>

int main()
{
    int n, i, j, prime;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        prime = 1;

        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

