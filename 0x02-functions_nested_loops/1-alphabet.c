#include "main.h"
#include "_putchar.c"

/**
*print_alphabet - Print the alphabet in lowercase, followed by a new line.
*
*Return: void.
*/

void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{	
		_putchar(ch);
	}
	_putchar('\n');
}
