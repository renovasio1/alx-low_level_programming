#include "main.h"
#include <string.h>

/**
 * _strlen - Return string lenght
 *
 * @s: pointer to the string to check
 * Return: void
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
