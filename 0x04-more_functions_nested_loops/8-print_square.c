#include "main.h"
/**
 * print_square - Entry point
 * @s: size
 * Return: 0
 */

void print_square(int s)
{
	int i = 0;

	int ii;

	while (i < s && s > 0)
	{
		ii = 0;
		while (ii < s)
		{
			_putchar('#');
			ii++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 0)
	{
		_putchar('\n');
	}
}
