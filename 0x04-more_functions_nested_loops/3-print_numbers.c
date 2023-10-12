#include "main.h"

/**
* print_numbers - prints numbers from 1 to 9 with _putchar
*, followed by a new line.
*
*Return: Void.
*/

void print_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		_putchar(number);
	}

	_putchar('\n');
}
