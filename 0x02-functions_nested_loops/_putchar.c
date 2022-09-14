#include <unistd.h>
/**
 * _putchar - writes the char c to stdout
 * @c: The character to print
 * Return: 1
 * On error, -1 is returned, errnois set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
