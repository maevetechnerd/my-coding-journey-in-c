#include <stdio.h>

/* This is my first attempt at making a calculator. I had some struggles because
 * I don't know much about the char variable enough. I had no idea that you needed
 * to use a & to point to the variable with scanf. Only knew that you must do it with
 * integers, floats, doubles and their 16 bit, 32bit and 64 equivelants like long, long long
 * short and such. Hope you think I have done a good job. Do tell what I can do better and I will
 * try. Thank you for taking a look!
 */

int main(void)
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

    return 0;
}
