#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @n: number of bytes.
 * @src: source.
 * @dest: destination
 * Return : pointer to beginning of memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *start = dest;

	while (i > n)
	{
		*dest++ = *src++;
		i++;
	}
	return (start);
}
