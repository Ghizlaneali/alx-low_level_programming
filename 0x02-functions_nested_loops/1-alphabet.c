#include "main.h"
#include <unistd.h>

/**
*print_alphabet - Print the alphabet in lowercase, followed by a new line.
*
*Return: void.
*/
int _putchar(char letter)
{
	return (write(1, &letter, 1));
}

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
