#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers,
 *              separated by commas and spaces, in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = i; j < 10; j++)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(',');
putchar(' ');
putchar((j / 10) + '0');
putchar((j % 10) + '0');
if (i != 9 || j != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
return (0);
}
