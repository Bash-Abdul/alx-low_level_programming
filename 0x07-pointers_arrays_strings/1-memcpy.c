#include "main.h"
/**
 * _memcpy - Entry point
 * @dest: to be copied
 * @src: source
 * @n: bytes to memory
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
