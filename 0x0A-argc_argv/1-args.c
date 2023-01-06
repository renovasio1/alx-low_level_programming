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
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
