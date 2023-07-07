#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: the number of command-line arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
printf("%d\n", argc - 1);
(void)argv;
return (0);
}
