#include "main.h"

/**
 * _isalpha - checks for alphabets
 *
 * @c: the letter been checked
 *
 * Return: 0 Always Succes
 */
int _isalpha(int c)
{
	if
		((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
