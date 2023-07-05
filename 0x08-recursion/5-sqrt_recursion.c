#include "main.h"

/**
 * _sqrt_helper - computes the natural square root of a number using binary search
 *
 * @n: the number whose square root is to be computed
 * @guess: the current guess for the square root
 *
 * Return: the natural square root of n
 */

int _sqrt_helper(int n, int guess);

/**
 * _sqrt_recursion - computes the natural square root of a number
 *
 * @n: the number whose square root is to be computed
 *
 * Return: the natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
int sqrt;
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
sqrt = _sqrt_helper(n, n / 2);
return (sqrt);
}
int _sqrt_helper(int n, int guess)
{
int new_guess;
if (guess * guess == n)
{
return (guess);
}
if (guess == 0 || guess == 1 || guess == n / guess)
{
return (-1);
}
new_guess = (guess + n / guess) / 2;
if (new_guess == guess)
{
return (_sqrt_helper(n, guess - 1));
}
return (_sqrt_helper(n, new_guess));
}
