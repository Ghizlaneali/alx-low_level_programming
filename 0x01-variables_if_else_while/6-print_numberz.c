#include <stdio.h>

/**
 * main - print single digits of base 10 setarting from 0
 * 	using only putchar, followed by a new line.
 *
 * Return:Always 0.
 */

int main(void)
{
	int num;
	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}	
