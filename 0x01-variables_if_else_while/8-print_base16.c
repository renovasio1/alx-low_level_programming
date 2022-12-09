#include <stdio.h>

/**
 * main - print number base 16
 *
 * Return: (0) succes
 */
int main(void)
{
	char letter;
	int num;

	for (num = 0; num <= 9; num++)
		putchar('0' + num);
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
