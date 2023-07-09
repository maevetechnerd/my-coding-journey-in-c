#include <stdio.h>

/* This example has been used in the K&R C book
 * and I decided to take the fahr to cels program
 * and convert so you can see every degree from 0 celsius
 * to 100 and convert it to fahrenheit.
 */

#define lower 0
#define upper 100
#define step 1

int main(void)
{
    for (int fahr = 0; fahr <= upper; fahr = fahr + step) {
        printf("%5d %6.2f\n", fahr, (5.0 / 9.0) * (fahr-32));
    }

    return 0;
}