/*
 * Name : Cherril
 * Roll : 590040896
 * Day  : 26 Question: 2
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 *Count positive, negative, and zero elements in an array.
 */
#include <stdio.h>

int main()
{
    int n, i, positive = 0, negative = 0, zero = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] > 0)
            positive++;
        else if (a[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive elements = %d\n", positive);
    printf("Negative elements = %d\n", negative);
    printf("Zero elements = %d\n", zero);

    return 0;
}
