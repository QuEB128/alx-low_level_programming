#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of elements
 * @nmemb: number of elements
 * @size: size of each element in bytes
 *
 * Return: pointer to the allocated memory, or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;
char *cptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
cptr = ptr;
for (i = 0; i < nmemb * size; i++)
cptr[i] = 0;
return (ptr);
}
