#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;
    int last_digit;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    last_digit = n % 10;

    printf("The last digit of %d is %d\n", n, last_digit);

    return (0);
}
