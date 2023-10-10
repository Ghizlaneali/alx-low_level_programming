#include <stdio.h>
#include "main.h"

/**
*main - Print the alphabet in lowercase, followed by a new line.
*
*Return: Alaways 0.
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
		putchar(ch);
		ch++;

	putchar('\n');

return (0);
}
