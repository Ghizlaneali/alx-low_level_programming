#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _memset - fills memory with a constant byte.
*@n : byte to fill
*@s : pointer
*@b : constant byte to fill with
*Return: pointer to beginning of memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (s);
}

/**
 * _calloc -  allocates memory using malloc and initializes in 0
 * @nmemb: number of elements of array to allocate
 * @size: size of elements
 *
 * Return: Pointer to allocated memory or normal process termination
 * with a status value of 98
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;


	if (nmemb == 0 || size == 0)
		return (0);

	p = malloc(nmemb * size);
	if (p == 0)
		return (0);
	_memset(p, 0, size * nmemb);

	return (p);
}
