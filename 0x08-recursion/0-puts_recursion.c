#include "main.h"
/**
 * _puts_recursion - prints a string
 *
 *
 * @s: string
 *
 * Return: c
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar('%c', *s);
	_puts_recursion(s + 1);
}
