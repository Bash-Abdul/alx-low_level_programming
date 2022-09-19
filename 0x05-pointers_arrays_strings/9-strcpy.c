#include "main.h"
/**
 * _strcpy - Entry point
 * @dest: A pointer
 * @src: A pointer
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
