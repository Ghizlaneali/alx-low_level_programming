#include "main.h"
/**
 * string_toupper - converts string lowercase letters to uppercase
 * @s: input string to be converted
 *
 * Return: string after conversion to upper
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] > 96 && s[i] < 123)
			s[i] -= 32;
	return (s);
}
