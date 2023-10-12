#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 14, 10 times
 * , followed by a new line.
 *
 */

void more_numbers(void)
{
	int number, row;

	for (row = 1; row <= 10; row++)
	{
		for (number = 0; number <= 14; number++)
		{
			_putchar(number);
		}
		_putchar('\n');
	}
}
