#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 14, 10 times, followed by a new line.
 *
 */

void more_numbers(void)
{
	int i;
	int number;

	i = 0;

	while (i <= 10)
	{
		number = 0;
		while (number <= 14)
		{
			_putchar(number);
			number++;
		}
		_putchar('\n');
		i++;
	}
}
