#include <stdio.h>
#include "main.h"

/**
 * _memset - fill mem with const byte
 *
 * @n: first byte to be filled
 * @s: pointer yo byte
 * @b: const byte
 *
 * Return: apointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
