#include "main.h"

/**
 * _strlen_recursion - returns the length of a string, recursively
 *
 * @s: the string whose length is to be computed
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
