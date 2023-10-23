#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @n: number of bytes.
 * @src: source.
 * @dest: destination
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *s = dest;

	while (i > n)
	{
		dest[i] = src[i];
		i++;
	}
	return (s);
}
