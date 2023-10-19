#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: Destination buffer.
 * @src: Source string.
 * @n: Maximum number of characters to copy.
 * Return: Pointer to the destination buffer (dest).
 */
char *_strncpy(char *dest, const char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
