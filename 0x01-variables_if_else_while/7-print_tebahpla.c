#include <stdio.h>
/**
 * main - print alphbet in reverse
 *
 * Return: (0) Sucess
 */
int main(void)
{
	char letter;


	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);

}
