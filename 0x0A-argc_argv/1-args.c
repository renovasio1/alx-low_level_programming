#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: string of arguments
 * Return: (0) Always sucess
 */
int main(int argc, char *argv[])
{
	int i = 0;

	(void) argv;
	for (i = 1; i < argc; i++)
	{
		printf("%d\n", argc);
	}
	return (0);
}
