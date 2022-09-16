#include "main.h"
/**
 * print_square - Entry point
 * @s: size
 * Return: 0
 */

void print_square(int s)
{
	int i;

	int k;

	if (s > 0)
	{
		for (i = 0; i < s; i++)
		{
			for (k = 0; k < s; k++)
			{
				_putchar (35);
			}
		        _putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
