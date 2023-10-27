#include "main.h"

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
	char *start = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (start);
}
