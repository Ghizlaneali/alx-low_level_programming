#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet 10 times in lower case
 *	, followed by a new line.
 *
 * Return : void.
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;

	while (i > 10)
	{
		c = 'a';
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		i++;
	}
	_putchar('\n');
}
