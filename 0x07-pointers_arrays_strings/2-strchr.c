#include "main.h"
/**
 * _strchr - Entry point
 * @s: string
 * @c: char
 * Return: something
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}

	if (*s == c)
	{
		return (s);
	}
	return (0);
}
