#include "main.h"
/**
 * print_last_digit - return last digit
 * @n : number to check
 * Return: 0 or 1
 */

int print_last_digit(int n)
{
	int pr;

	if (n < 0)
	{
		pr = -1 * (n % 10);
	}
	else
	{
		pr = n % 10;
	}

	_putchar(pr + '0');
	return (pr);
}
