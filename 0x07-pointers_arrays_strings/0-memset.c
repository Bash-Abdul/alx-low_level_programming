#include "main.h"
/**
 * _memset - Entry point
 * @s: pinter
 * @b: pointer
 * @n: variable
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
