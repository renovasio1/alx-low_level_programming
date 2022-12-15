#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table
 *
 * Return: (0) Succes
 */
void times_table(void)
{
	int i, j;
	int n = 9;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int mul =  i * j;

			if (mul <= 9)
			{
				printf(" %d", mul);
			}
			else
					printf("%d", mul);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
