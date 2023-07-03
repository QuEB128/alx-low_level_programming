#include "main.h"
#include <unistd.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0;
int sum2 = 0;
for (i = 0; i < size * size; i += size + 1)
sum1 += *(a + i);
for (i = size - 1; i < size * size - 1; i += size - 1)
sum2 += *(a + i);
_putchar(sum1 / 10 + '0');
_putchar(sum1 % 10 + '0');
_putchar(',');
_putchar(' ');
_putchar(sum2 / 10 + '0');
_putchar(sum2 % 10 + '0');
_putchar('\n');
}
