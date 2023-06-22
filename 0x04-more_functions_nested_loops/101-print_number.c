#include "main.h"

/**
* print_number - prints an integer using only putchar
* @n: the integer to be printed
*/
void print_number(int n)
{
    int divisor = 1;
    int i, digit, negative = 0;

    if (n == 0)
    {
        _putchar('0');
        return;
    }

    if (n < 0)
    {
        _putchar('-');
        negative = 1;
        n = -n;
    }

    /* Find the largest power of 10 that divides n */
    while (n / divisor >= 10)
        divisor *= 10;

    /* Print each digit of n in turn */
    for (i = divisor; i >= 1; i /= 10)
    {
        digit = (n / i) % 10;
        _putchar('0' + digit);
    }
}
