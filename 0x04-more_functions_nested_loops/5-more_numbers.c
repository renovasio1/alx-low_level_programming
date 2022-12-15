#include "main.h"

/**
 * more_numbers - prints 10 times num from 0-14
 *
 * Return: nums from 0-14 10 times
 */
void more_numbers(void)
{
	int i;
	int x;

	for (i = 0; i <= 9; i++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
