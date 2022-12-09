#include <stdio.h>

/**
 * main - print alphabet except q e
 *
 * Return: (0) succes
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++ )
	{
		if (letter != 'q' && letter != 'e')
		    putchar (letter);
        }
	putchar ('\n');

	return (0);
}	
