#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * @argc: num of arguments
 * @argv: string of char
 * Return: Always (0) succes
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
