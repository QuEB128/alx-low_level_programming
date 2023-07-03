#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to the string to search.
 * @accept: pointer to the string containing the characters to match.
 *
 * Return: the number of bytes in the initial segment of @s which consist only
 *         of bytes from @accept.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int match;
while (*s != '\0')
{
match = 0;
while (*accept != '\0')
{
if (*s == *accept)
{
count++;
match = 1;
break;
}
accept++;
}
if (match == 0)
return (count);
s++;
accept = accept - count;
}
return (count);
}
