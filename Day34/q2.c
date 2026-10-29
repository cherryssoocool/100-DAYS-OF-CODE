/*
 * Name : Cherril
 * Roll : 590040896
 * Day  : 34 Question: 2
 * Date : 30-10-2026
 *
 * PROBLEM STATEMENT:
 * Delete an element from an array.

 */
 #include <stdio.h>

int main()
{
    int n, i, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n)
    {
        printf("Invalid position");
        return 0;
    }

    for (i = pos - 1; i < n - 1; i++)
        a[i] = a[i + 1];

    printf("Array after deletion: ");
    for (i = 0; i < n - 1; i++)
        printf("%d ", a[i]);

    return 0;
}
