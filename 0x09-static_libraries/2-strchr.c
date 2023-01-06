#include "main.h"
/**
 * _strchr - search for c in *s
 *
 *@s: string to be searched in
 *@c: letter to search for
 *
 *Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
