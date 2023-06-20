#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 on success
 */
int main(void)
{
    int i;
    long fib1, fib2, fib3;

    fib1 = 1;
    fib2 = 2;

    printf("%ld, %ld", fib1, fib2);

    for (i = 3; i <= 50; i++)
    {
        fib3 = fib1 + fib2;
        printf(", %ld", fib3);
        fib1 = fib2;
        fib2 = fib3;
    }

    printf("\n");

    return 0;
}
