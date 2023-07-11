#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to a new string containing the concatenated arguments
 *         or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
char *str;
int i, len, total_len = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
len = 0;
while (av[i][len])
len++;
total_len += len + 1;
}
str = malloc(sizeof(char) * total_len);
if (str == NULL)
return (NULL);
total_len = 0;
for (i = 0; i < ac; i++)
{
len = 0;
while (av[i][len])
{
str[total_len] = av[i][len];
len++;
total_len++;
}
str[total_len] = '\n';
total_len++;
}
str[total_len] = '\0';
return (str);
}
