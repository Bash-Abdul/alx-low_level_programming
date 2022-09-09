#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters == 'q')
			continue;

		else if (letters == 'e')
			continue;

		putchar(letters);
	}

	putchar ('\n');

	return (0);
}
