#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, x, y, next;

	x = 1;

	y = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (x != 20365011074)
		{
			printf("%ld, ", x);
		} else
		{
			printf("%ld\n", x);
		}
		next =x + y;
		x = y;
		y = next;
	}

	return (0);
}
