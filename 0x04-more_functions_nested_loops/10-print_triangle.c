#include "main.h"
/**
 * print_triangle - Entry point
 * @s: size
 * Return: 0
 */

void print_triangle(int s)
{
	int i = 1;

	int ii;

	while (i <= s && s > 0)
	{
		ii = 0;
		while (ii < s - i)
		{
			_putchar(' ');
			ii++;
		}
		ii = 0;
		while (ii < i)
		{
			_putchar('#');
			ii++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 1)
	{
		_putchar('\n');
	}
}
