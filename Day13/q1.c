/*
 * Name :  Cherril
 * Roll : 590040896
 * Day : 13 Question: 1
 * Date : 25-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to implement a basic calculator using switch-case
 * for +, -, *, /, %.
 */

#include <stdio.h>

int main() {
    int a, b, result;
    char op;

    printf("Enter two numbers and operator: ");
    scanf("%d %d %c", &a, &b, &op);

    switch (op) {
        case '+':
            result = a + b;
            printf("%d", result);
            break;

        case '-':
            result = a - b;
            printf("%d", result);
            break;

        case '*':
            result = a * b;
            printf("%d", result);
            break;

        case '/':
            if (b != 0)
                printf("%d", a / b);
            else
                printf("Division by zero is not allowed");
            break;

        case '%':
            if (b != 0)
                printf("%d", a % b);
            else
                printf("Modulo by zero is not allowed");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}
