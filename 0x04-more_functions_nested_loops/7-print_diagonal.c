#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal.
*@n: the number of times the diagonal line is printed.
*/

void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0;j < i; j++)
				_putchar(' ');
		_putcahar(92);
		_putcahar('\n');
		}
	}
	else
		_putcahar('\n');
}
