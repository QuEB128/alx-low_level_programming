#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - Prints a buffer
 * @b: The buffer to print
 * @size: The size of the buffer
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
int i, j;

if (size <= 0)
{
printf("\n");
return;
}
for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);
for (j = 0; j < 10; j++)
{
if (j + i >= size)
printf("  ");
else
printf("%02x", *(b + i + j));
if (j % 2 == 1)
printf(" ");
}
for (j = 0; j < 10; j++)
{
if (j + i >= size)
break;
if (isprint(*(b + i + j)))
printf("%c", *(b + i + j));
else
printf(".");
}
printf("\n");
}
}
