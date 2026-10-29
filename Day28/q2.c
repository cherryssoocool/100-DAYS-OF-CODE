/*
 * Name : Cherril
 * Roll : 590040896
 * Day  : 28 Question: 2
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Read and print elements of a one-dimensional array.
 */
 #include <stdio.h>
 int main()
 {
 int n, i, a[100];
 scanf("%d", &n);
 for (i = 0; i < n; i++)
{ 
scanf("%d", &a[i]);
} 
for (i = 0; i < n; i++)
{ 
printf("%d ", a[i]);
} 
return 0;
 }
