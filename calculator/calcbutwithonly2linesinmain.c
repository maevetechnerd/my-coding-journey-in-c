#include <stdio.h>

/* I attempted to do something slightly more advanced and added another function.
 * It went pretty smoothly and no bugs I have noticed so far too which is really nice!
 * Thank you for taking a look, and if you have any tips on making this better, do tell!
 */

int calcFunction(void);

int main(void)
{
    calcFunction();

    return 0;
}

int calcFunction(void)
{
    int a;
    char operator;
    int b;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter a operator: ");
    scanf(" %c", &operator);
    printf("Enter the second number: ");
    scanf("%d", &b);

    if (operator == '+') {
        printf("%d\n", a + b);
    }
    else if (operator == '-') {
        printf("%d\n", a - b);
    }
    else if (operator == '*') {
        printf("%d\n", a * b);
    }
    else if (operator == '/') {
        printf("%d\n", a / b);
    }
    else {
        printf("invalid operator\n");
    }
}
