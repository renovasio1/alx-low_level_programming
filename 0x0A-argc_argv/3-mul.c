#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * @argc: num of arguments
 * @argv: string of argum
 * Return: (0) Always sucess
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int result = 1;

	if (argc < 3)
		printf("Error");
	else
		for (i = 1; i < argc; i++)
		{
			result *= atoi(argv[i]);
		}
	printf("%d\n", result);
	return (0);
}
