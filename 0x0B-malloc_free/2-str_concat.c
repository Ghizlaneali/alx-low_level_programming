#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string,
 *         or NULL if memory allocation fails.
 */

char *str_concat(char *s1, char *s2)
{
	size_t i = 0;

	char *d = (char *)malloc(sizeof(s1) + sizeof(s2) + 1);

	if (d == NULL)
	{
		return (NULL);
	}

	while (*s1 != '\0')
	{
		d[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		d[i] = *s2;
		s2++;
		i++;
	}

	return (d);
}
