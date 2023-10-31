#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	unsigned int i = 0;
	int len1 = 0, len2 = 0;

	if (s1 != NULL)
	{
		len1 = strlen(s1);
	}
	if (s2 != NULL)
	{
		len2 = strlen(s2);
	}

	int total_len = len1 + len2;

	char *d = malloc(sizeof(char) * (total_len + 1));

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
