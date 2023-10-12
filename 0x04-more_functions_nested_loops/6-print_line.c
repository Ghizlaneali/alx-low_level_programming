/**Where n is the number of times the character _ should be printed
The line should end with a \n
If n is 0 or less, the function should only print \n**/

#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 */

void print_line(int n)
{
	if (n > 0)
	{
		_putchar('_');
	}
	else
	{
		_putchar('\n');
	}
}
