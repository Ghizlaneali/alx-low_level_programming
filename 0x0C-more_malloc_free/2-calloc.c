#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
