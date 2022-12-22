#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: destination array
 * @src: source
 * @n: element in array
 * Return: (0) Always Sucess
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
