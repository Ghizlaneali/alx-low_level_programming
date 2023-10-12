#include "main.h"

/**
* print_most_numbers - prints numbers from 1 to 9 except 2 and 4 with _putchar
*, followed by a new line.
*
*Return: Void.
*/
void print_most_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		while (number != 2 && number != 4)
		{
			_putchar(number);
		}
	}
	_putchar('\n');
}
