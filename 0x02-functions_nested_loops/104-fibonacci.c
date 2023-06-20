#include "main.h"

#define MAX_FIB 98

/**
 * main - finds and prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 on success
 */
int main(void)
{
    unsigned int fib1 = 1, fib2 = 2, fib3;
    int i;

    _putchar('0' + fib1);
    _putchar(',');
    _putchar(' ');
    _putchar('0' + fib2);

    for (i = 3; i <= MAX_FIB; i++)
    {
        fib3 = fib1 + fib2;
        _putchar(',');
        _putchar(' ');
        print_number(fib3);
        fib1 = fib2;
        fib2 = fib3;
    }

    _putchar('\n');

    return 0;
}

/**
 * print_number - prints an unsigned integer
 * @n: the number to print
 */
void print_number(unsigned int n)
{
    if (n / 10)
        print_number(n / 10);

    _putchar('0' + n % 10);
}
