#include "main.h"

/**
* print_line - draws a straight line in the terminal.
*@n: the number if times the character _ is printed.
*/

void print_line(int n)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
