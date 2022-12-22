#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @i: array var
 * @j: array var
 *
 * Return: (0) Always Succes
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++);
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src [j];
		i++ ;
	}
	dest[i] = '\0';
	return (0);
}
