/*
 * Name : Cherril
 * Roll : 590040896
 * Day  : 34 Question: 1
 * Date : 30-10-2026
 *
 * PROBLEM STATEMENT:
 * Insert an element in an array at a given position.

 */
 #include <stdio.h>

int main()
{
    int n, i, pos, element;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n + 1];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element and position: ");
    scanf("%d %d", &element, &pos);

    if (pos < 1 || pos > n + 1)
    {
        printf("Invalid position");
        return 0;
    }

    for (i = n; i >= pos; i--)
        a[i] = a[i - 1];

    a[pos - 1] = element;

    printf("Array after insertion: ");
    for (i = 0; i <= n; i++)
        printf("%d ", a[i]);

    return 0;
}
