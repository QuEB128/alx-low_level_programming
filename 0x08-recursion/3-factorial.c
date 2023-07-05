#include "main.h"

/**
 * factorial - computes the factorial of a number
 *
 * @n: the number whose factorial is to be computed
 *
 * Return: the factorial of n, or -1 if n is negative
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
