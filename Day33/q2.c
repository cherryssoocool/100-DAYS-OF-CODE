/*
 * Name : Cherril
 * Roll : 590040896
 * Day  : 33 Question: 2
 * Date : 30-10-2026
 *
 * PROBLEM STATEMENT:
 * Insert an element in a sorted array at the appropriate position.

 */
 #include <stdio.h>

int main()
{
    int n, i, key, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n + 1];

    printf("Enter sorted array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the element to insert: ");
    scanf("%d", &key);

    pos = n;

    while (pos > 0 && a[pos - 1] > key)
    {
        a[pos] = a[pos - 1];
        pos--;
    }

    a[pos] = key;

    printf("Array after insertion: ");
    for (i = 0; i <= n; i++)
        printf("%d ", a[i]);

    return 0;
}
