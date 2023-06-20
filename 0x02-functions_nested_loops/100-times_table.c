#include "main.h"

/**
 * times_table - prints the n times table
 */
void print_times_table(int n)
{
    int i, j, result;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            result = i * j;
            if (j == 0)
            {
                _putchar('0');
            }
            else if (result <= n)
            {
                _putchar(' ');
                _putchar(result + '0');
            }
            else
            {
                _putchar((result / n + 1) + '0');
                _putchar((result % n + 1) + '0');
            }
            if (j != n)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
        _putchar('\n');
    }
}
