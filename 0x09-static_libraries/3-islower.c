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
		return (1);
	}
	else
	{
		return (0);
	}
}
