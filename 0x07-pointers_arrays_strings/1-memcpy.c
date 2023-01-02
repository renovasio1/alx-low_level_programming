#include "main.h"

/**
 * _memcpy - copy memory with src
 *
 *@dest: string
 *@n: number of copied char
 *@src: copy from to dest
 *
 * Return: dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
