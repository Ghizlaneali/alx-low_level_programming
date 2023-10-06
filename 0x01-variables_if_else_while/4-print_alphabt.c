#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'd'; letter++)
		putchar(letter);
	for (letter = 'f'; letter <= 'p'; letter++)
		putchar(letter);
	for (letter = 'r'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
