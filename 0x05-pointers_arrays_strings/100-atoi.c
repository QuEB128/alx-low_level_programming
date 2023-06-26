#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Return: the converted integer
 */

gnt _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] != '\0')
	{
	if (s[i] == '-')
	{
		sign = -sign;
	}
	else if (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
	}
	else if (result > 0)
	{
		break;
	}
	i++;
	}

	return (sign * result);
}
