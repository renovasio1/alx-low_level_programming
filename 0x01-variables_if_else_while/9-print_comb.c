#include <stdio.h>
/**
 * main - print possible combination of single digit number
 *
 * Return: (0) Sucess
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
		if (num == 9)
			break;

		putchar(',');
		putchar(' ');
	}

	return (0);
}
