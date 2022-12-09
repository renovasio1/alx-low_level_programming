#include <stdio.h>
/**
 * main - print digits from 0-9 with putchar
 *
 * Return: (0) Succes
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9 ; num++)
		putchar('0' + num);

	putchar('\n');

	return (0);

}
