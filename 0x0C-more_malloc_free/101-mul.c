#include <stdlib.h>
#include <stdio.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - computes the length of a string
 * @s: the string to measure
 *
 * Return: the length of s
 */

int _strlen(char *s)
{
	int len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _puts - prints a string to stdout
 * @s: the string to print
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		putchar(*s);
		s++;
	}
}

/**
 * _print_result - prints the result of the multiplication
 * @result: the result of the multiplication, as an array of digits
 * @size: the number of digits in the result
 */

void _print_result(int *result, int size)
{
	int i;
	for (i = size - 1; i >= 0; i--)
	{
		putchar(result[i] + '0');
	}
	putchar('\n');
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of arguments, including the program name
 * @argv: an array containing the arguments as strings
 *
 * Return: 0 if successful, 98 if there is an error
 */

int main(int argc, char **argv)
{
	int *result, size, carry, digit, i, j;

	if (argc != 3)
	{
		_puts("Error\n");
		return (98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!_isdigit(argv[i][j]))
			{
				_puts("Error\n");
				return (98);
			}
		}
	}
	size = _strlen(argv[1]) + _strlen(argv[2]);
	result = calloc(size, sizeof(int));
	if (result == NULL)
	{
		_puts("Error\n");
		return (98);
	}
	for (i = 0; argv[1][i] != '\0'; i++)
	{
		carry = 0;
		for (j = 0; argv[2][j] != '\0'; j++)
		{
			digit = (argv[1][i] - '0') * (argv[2][j] - '0');
			digit += result[i + j] + carry;
			result[i + j] = digit % 10;
			carry = digit / 10;
		}
		result[i + j] += carry;
	}
	while (size > 0 && result[size - 1] == 0)
	{
		size--;
	}

	if (size == 0)
	{
		putchar('0');
		putchar('\n');
	}
	else
	{
		_print_result(result, size);
	}
	free(result);
	return (0);
}
