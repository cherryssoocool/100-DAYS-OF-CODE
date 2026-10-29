/*
 * Name : Cherril
 * Roll : 590040896
 * Day  : 31 Question: 2
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Reverse an array without taking extra space.
 */
 #include <stdio.h>

int main()
{
    int n, i, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    printf("Reversed array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
