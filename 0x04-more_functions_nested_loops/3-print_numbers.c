#include "main.h"

/**
* print_numbers - prints numbers from 1 to 9 with _putchar
*, followed by a new line.
*
*Return: Void.
*/

void print_numbers(void)
{
	int number = 0;

	while (number <= 9)
	{
		_putchar(number);
		number++;
	}

	_putchar('\n');
}
