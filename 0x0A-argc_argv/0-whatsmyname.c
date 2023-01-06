#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: number of elements after prog name
 * @argv: string of char
 * Return: (0) Always sucess
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}
