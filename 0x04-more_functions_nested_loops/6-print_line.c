#include "main.h"

/**
 * print_line - draws straight line
 *
 * @n: num of char used in line
 *
 * Return: line
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
