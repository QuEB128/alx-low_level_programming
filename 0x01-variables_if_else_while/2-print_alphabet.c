#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main (void)
{
int lower_case ='a';
while (lower_case <= 'z')	
{
putchar(lower_case);
lower_case += 1;
}
putchar('\n');
return (0);
}

