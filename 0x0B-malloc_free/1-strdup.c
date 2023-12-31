#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate of the string str
 * @str: the string to duplicate
 *
 * Return: a pointer to the duplicated string, or NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
char *dup;
int i, len = 0;
if (str == NULL)
return (NULL);
while (str[len] != '\0')
len++;
dup = malloc((len + 1) * sizeof(char));
if (dup == NULL)
return (NULL);
for (i = 0; i <= len; i++)
dup[i] = str[i];
return (dup);
}
