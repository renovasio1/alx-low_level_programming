#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array of char
 * @size: size of array
 * @c: specific char
 *
 * Return: char pointer
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;

	if (size == 0)
		return (NULL);

	x = malloc(size * sizeof(*x));
	if (x == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		x[i] = c;
	return (x);
}
