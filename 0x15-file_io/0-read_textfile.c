#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *x;
	ssize_t d;
	ssize_t y;
	ssize_t t;

	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	x = malloc(sizeof(char) * letters);
	t = read(d, x, letters);
	y = write(STDOUT_FILENO, x, t);

	free(x);
	close(d);
	return (y);
}
