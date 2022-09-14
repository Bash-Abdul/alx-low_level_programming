#include "main.h"
/**
 * jack_bauer - print every minute of the day of Jack Bauer
 * Return: 0
 */
void jack_bauer(void)
{
	int hr1;
	int hr2;
	int mn1;
	int mn2;

	int a = 9;

	hr2 = 0;

	while (hr2 <= 2)
	{
		if (hr2 == 2)
		{
			a = 3;
		}

		hr1 = 0;
		while (hr1 <= a)
		{
			mn2 = 0;
			while (mn2 <= 5)
			{
				mn1 = 0;
				while (mn1 <= 9)
				{
					_putchar('0' + hr2);
					_putchar('0' + hr1);
					_putchar(':');
					_putchar('0' + mn2);
					_putchar('0' + mn1);

					_putchar('\n');

					mn1++;
				}
				mn2++;
			}
			hr1++;
		}
		hr2++;
	}
}



