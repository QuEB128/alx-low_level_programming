#include "main.h"

/**
 * infinite_add - Adds two positive numbers
 * @n1: The first number to be added
 * @n2: The second number to be added
 * @r: The buffer to store the result
 * @size_r: The maximum size of the buffer
 *
 * Return: If the result can be stored in r, the function returns a pointer
 * to the result. Otherwise, it returns 0.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0;
int i = 0;
int j = 0;
int sum = 0;

while (n1[i] != '\0')
i++;
while (n2[j] != '\0')
j++;
if (i >= size_r || j >= size_r)
return (0);
r[size_r - 1] = '\0';
i--;
j--;
size_r--;
while (i >= 0 || j >= 0 || carry > 0)
{
sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';
carry = sum / 10;
if (size_r <= 0)
return (0);
r[size_r - 1] = (sum % 10) + '0';
size_r--;
i--;
j--;
}
return (r + size_r);
}
