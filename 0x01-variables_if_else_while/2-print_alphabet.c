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
		putchar(letters);
	}

	putchar('\n');

	return (0);
}
