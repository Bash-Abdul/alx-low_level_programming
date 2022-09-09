#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	char letters;

	for (letters = 122; letters >= 97; letters++)
	{
		putchar(letters);
	}

	putchar('\n);

	return (0);
}
