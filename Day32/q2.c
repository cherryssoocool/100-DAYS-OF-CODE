/*
 * Name : Cherril
 * Roll : 590040896
 * Day  : 32 Question: 2
 * Date : 30-10-2026
 *
 * PROBLEM STATEMENT:
 * Find the digit that occurs the most times in an integer number.

 */
 #include <stdio.h>

int main()
{
    long long n;
    int digit, maxDigit = 0, maxCount = 0;
    int count[10] = {0};

    printf("Enter an integer: ");
    scanf("%lld", &n);

    if (n < 0)
        n = -n;

    if (n == 0)
        count[0]++;

    while (n > 0)
    {
        digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    for (digit = 0; digit < 10; digit++)
    {
        if (count[digit] > maxCount)
        {
            maxCount = count[digit];
            maxDigit = digit;
        }
    }

    printf("Most frequent digit = %d\n", maxDigit);
    printf("Frequency = %d\n", maxCount);

    return 0;
}
