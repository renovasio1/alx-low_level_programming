#include <stdio.h>

/**
 * main - print alphabit in lower case
 *
 * Return: (0) Succes
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
