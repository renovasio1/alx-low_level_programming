#include "main.h"

/**
 * _islower - checks for lowercase characters
 *
 * @c: is int to be checked
 *
 * Return: Always (0)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
