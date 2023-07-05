#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if they can be considered identical
 * @s1: the first string
 * @s2: the second string (may contain wildcard *)
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
else if (*s2 == '*')
{
if (*s1 == '\0' && *(s2 + 1) == '\0')
return (1);
else if (*s1 == '\0' || *(s2 + 1) == '\0')
return (0);
else
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}
else if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
else
return (0);
}
