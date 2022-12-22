#include "main.h"
/**
 * _strncat - concatenate two strings
 *
 * @dest: first s
 * @src: sec s
 * @n: stopping parameter
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
		if ((j + 1) == n)
			break;
	}
	dest[i] = '\0';
	return (dest);
}
